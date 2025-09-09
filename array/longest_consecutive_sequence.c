#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int longestConsecutive(int arr[], int n) {
    if (n == 0) return 0;

    // Step 1: Sort the array
    qsort(arr, n, sizeof(int), cmp);

    // Step 2: Scan and count longest streak
    int longest = 1;
    int curr = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            // Consecutive → extend streak
            curr++;
        }
        else if (arr[i] != arr[i - 1]) {
            // Gap (not duplicate) → restart streak
            curr = 1;
        }
        // Update longest if needed
        if (curr > longest) longest = curr;
    }

    return longest;
}

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = longestConsecutive(arr, n);
    printf("Longest consecutive sequence length = %d\n", ans);

    return 0;
}
