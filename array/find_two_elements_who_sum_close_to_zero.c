#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void closestToZero(int arr[], int n) {
    qsort(arr, n, sizeof(int), cmp);

    int left = 0, right = n-1;
    int minSum = INT_MAX;
    int resLeft = left, resRight = right;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (abs(sum) < minSum) {
            minSum = abs(sum);
            resLeft = left;
            resRight = right;
        }

        if (sum < 0)
            left++;
        else
            right--;
    }

    printf("Two elements whose sum is closest to zero: %d and %d\n", arr[resLeft], arr[resRight]);
}

int main() {
    int arr[] = {1, 60, -10, 70, -80, 85};
    int n = sizeof(arr)/sizeof(arr[0]);

    closestToZero(arr, n);
    return 0;
}

