#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int max_current = arr[0];
    int max_global = arr[0];
    int start = 0, end = 0, tempstart = 0;

    for (int i = 1; i < n; i++) {
        if (max_current + arr[i] > arr[i])
            max_current = max_current + arr[i];
        else {
            max_current = arr[i];
	    tempstart=i;
	}

        if (max_current > max_global) {
            max_global = max_current;
	    start=tempstart;
	    end=i;
	}
    }
    printf("Maximum sum: %d\n", max_global);
    printf("Subarray: ");
    for (int i = start; i <= end; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return max_global;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = maxSubArraySum(arr, n);
    printf("Maximum subarray sum: %d\n", maxSum);

    return 0;
}
