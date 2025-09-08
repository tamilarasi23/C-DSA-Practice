#include <stdio.h>

void findSubarrayWithSum(int arr[], int n, int S) {
    int start = 0, end = 0, current_sum = 0;

    while (end < n) {
        current_sum += arr[end];

        // Shrink from left if sum exceeds S
        while (current_sum > S && start < end) {
            current_sum -= arr[start];
            start++;
        }

        if (current_sum == S) {
            printf("Subarray with sum %d: ", S);
            for (int i = start; i <= end; i++)
                printf("%d ", arr[i]);
            printf("\n");
            return;
        }

        end++;
    }

    printf("No subarray with sum %d found.\n", S);
}

int main() {
    int n, S;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements (non-negative): ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target sum: ");
    scanf("%d", &S);

    findSubarrayWithSum(arr, n, S);

    return 0;
}
