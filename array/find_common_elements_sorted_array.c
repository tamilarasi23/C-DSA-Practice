#include <stdio.h>
#include <string.h>
int findCommon(int arr1[], int n1, int arr2[], int n2, int *arr3) {
	int i = 0;
	int j = 0;
	int k = 0;

	while(i<n1 && j<n2) {
		if(arr1[i]==arr2[j]) {
			arr3[k]=arr1[i];
			i++;
			j++;
			k++;
		}
		else if(arr1[i]<arr2[j]) {
			i++;
		}
		else  {
			j++;
		}
	}
	return k;
}

int main() {
    int n1, n2,n3,i;
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter elements of first array (sorted): ");
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter elements of second array (sorted): ");
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    n3  = n1 < n2 ? n1 : n2;

    int arr3[n3];

    int k = findCommon(arr1, n1, arr2, n2, arr3);

    printf("The common elements are\n");
    for (i = 0; i< k; i++) {
    	printf("%d\n",arr3[i]);
    }

    return 0;
}
