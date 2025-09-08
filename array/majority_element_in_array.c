#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int candidate = -1;
    int count = 0;

    // Step 1: Find candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;
    else
        return -1;  // No majority element
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = findMajorityElement(arr, n);
    if (result != -1)
        printf("Majority element: %d\n", result);
    else
        printf("No majority element found\n");

    return 0;
}
