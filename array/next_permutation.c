#include <stdio.h>
#include <stdlib.h>

void reverse (int *arr, int start, int end) {
	
	while(start<end) {
		char temp = arr[start];
		arr[start] =  arr[end];
		arr[end] = temp;
		start ++;
		end --;
	}
}

void swap(int *arr, int n, int m) {
	char temp = arr[n];
	arr[n] = arr[m];
	arr[m] = temp;
} 
int next_permutation(int *arr,int n) {
	int pivot = n-2;
	int j= n-1;
	while(pivot && arr[pivot]>arr[pivot+1]) {
		pivot--;
	}

	if(pivot>=0) {
		while(arr[j]<arr[pivot]) {
			j--;
		}
		swap(arr,pivot,j);
		reverse(arr,pivot+1,n-1);
	}
		
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    next_permutation(arr,n);

    printf("next permutation\n"); 
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    
    
    return 0;
}
