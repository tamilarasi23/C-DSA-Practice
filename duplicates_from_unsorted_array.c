#include <stdio.h>

#define MAX 1000
int removeDuplicatesUnsorted (int *arr, int n) {
	int hash[MAX] = {0};
	int i,j;

	for (i=0;i<n;i++) {
		if(!hash[arr[i]]) {
			arr[j++] = arr[i];
			hash[arr[i]]=1;
		}	
	}
	return j;
}

int main() {
    int arr[] = {10, 20, 10, 30, 20, 40};
    int n = sizeof(arr)/sizeof(arr[0]);

    n = removeDuplicatesUnsorted(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
