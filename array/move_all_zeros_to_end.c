#include <stdio.h>
#include <stdlib.h>

int move_all_zeros_to_end(int *arr,int n) {
	int i = 0;
	int j = 0;

	for(i=0;i<n;i++) {
		if(arr[i]!=0) {
			arr[j++]=arr[i];
		}	
	}
	for(i=j;i<n;i++) {
		arr[i]=0;
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

    move_all_zeros_to_end(arr,n);

    printf("Moved zeros to the end\n"); 
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    
    
    return 0;
}
