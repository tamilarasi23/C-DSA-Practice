#include <stdio.h>
#include <math.h>

void merge(int arr1[], int n, int arr2[], int m) {
    int gap = (int)ceil((n + m) / 2.0);

    while (gap > 0) {
        int i, j;

        // Compare elements in the first array
        for (i = 0; i + gap < n; i++) {
            if (arr1[i] > arr1[i + gap]) {
                int temp = arr1[i];
                arr1[i] = arr1[i + gap];
                arr1[i + gap] = temp;
            }
        }

        // Compare elements between both arrays
        for (j = gap > n ? gap - n : 0; i < n && j < m; i++, j++) {
            if (arr1[i] > arr2[j]) {
                int temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
            }
        }

        // Compare elements in the second array
        if (j < m) {
            for (j = 0; j + gap < m; j++) {
                if (arr2[j] > arr2[j + gap]) {
                    int temp = arr2[j];
                    arr2[j] = arr2[j + gap];
                    arr2[j + gap] = temp;
                }
            }
        }

        if (gap == 1)
            gap = 0;
        else
            gap = (int)ceil(gap / 2.0);
    }
}

int main() {
    int n, m;
    printf("Enter size of first array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter elements of first array (sorted): ");
    for (int i = 0; i < n; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter elements of second array (sorted): ");
    for (int i = 0; i < m; i++) scanf("%d", &arr2[i]);

    merge(arr1, n, arr2, m);

    printf("After merging:\nFirst array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr1[i]);
    printf("\nSecond array: ");
    for (int i = 0; i < m; i++) printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}
