#include <stdio.h>

int removeDuplicatesUnsorted (int *arr, int n) {
	int i,j;
	int count=0;

	for (i=0;i<n;i++) {
		count  = 1;
		for (j=i+1;j<n;j++) {
			if(arr[i] == arr[j]) {
				count++;
			}
		}
		if(count==1) {
			return arr[i];
		}
	}
	return 0;
}
int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    n = removeDuplicatesUnsorted(arr, n);

    printf("%d\n",n);
    return 0;
}
