#include <stdio.h>

int maxSumRotation(int arr[], int n) {
    int arrSum = 0;
    int currVal = 0;

    for (int i = 0; i < n; i++) {
        arrSum += arr[i];
        currVal += i * arr[i];
    }

    int maxVal = currVal;

    for (int j = 1; j < n; j++) {
        currVal = currVal + arrSum - n * arr[n-j];
        if (currVal > maxVal) maxVal = currVal;
    }

    return maxVal;
}

int main() {
    int arr[] = {1, 20, 2, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = maxSumRotation(arr, n);
    printf("Maximum sum of i*arr[i] = %d\n", ans);
    return 0;
}

