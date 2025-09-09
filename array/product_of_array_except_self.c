#include <stdio.h>

void productExceptSelf(int arr[], int n) {
    int res[n];

    // Step 1: Compute prefix products
    res[0] = 1;  // nothing to the left of first element
    for (int i = 1; i < n; i++) {
        res[i] = res[i - 1] * arr[i - 1];
    }

    // Step 2: Multiply with suffix products
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        res[i] = res[i] * suffix;
        suffix *= arr[i];
    }

    // Print result
    printf("Product array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    productExceptSelf(arr, n);
    return 0;
}

