#include <stdio.h>
#include <stdlib.h>

void reverse(int *arr, int start, int end) {
	
	int temp = 0;
	while(start<end) {
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

void print_arr(int *arr,int n) {
	for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}
void left_rotate_array(int *arr,int n, int k) {

	k=k%n;
	reverse(arr,0,k-1);
	reverse(arr,k,n-1);
	reverse(arr,0,n-1);
		
}
void right_rotate_array(int *arr,int n, int k) {

        k=k%n;
        reverse(arr,0,n-k-1);
        reverse(arr,n-k,n-1);
        reverse(arr,0,n-1);

}

int main() {
    int n,k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter no of time to rotate ");
    scanf("%d", &k);

    left_rotate_array(arr,n,k);
    printf("After left rotation\n");
    print_arr(arr,n);
    right_rotate_array(arr,n,k);
    printf("After right rotation\n");
    print_arr(arr, n); 
    
    return 0;
}
