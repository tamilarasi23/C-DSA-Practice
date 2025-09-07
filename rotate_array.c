#include <stdio.h>

int rotate_array (int *arr, int n,int k) {
	int *temp_arr = arr;
	int i,j,temp;

	for (i=0;i<k;i++) {
		temp = arr[0];
		for (j=0;j<n-1;j++) {
			arr[j] = arr[j+1];
		}
		arr[j+1]=temp;
	}
	return 0;
}
int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k,i;
    printf("How many times need to rotate\n");
    scanf("%d",&k);
    rotate_array(arr, n, k);

    for(i=0;i<n;i++) {
    	printf("%d ",arr[i]);
    }
    return 0;
}
