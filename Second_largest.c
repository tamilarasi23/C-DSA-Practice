#include<stdio.h>
#include<stdlib.h>
int second_largest(int *a, int num) {
	int max = a[0];
	int second_max = a[0];
	int i = 0;
	for(i=1;i<num;i++) {
		if(a[i] > max) {
			second_max=max;
			max=a[i];
		}
		if (a[i] > second_max && a[i] < max) {
			second_max=a[i];
		}
	}
	printf(" The second max: %d\n", second_max);
	return 0;
}
int main() {
	int arr[6]={5,32,45,21,65,78};
	int num=sizeof(arr)/sizeof(arr[0]);
	second_largest(arr,num);
	return 0;
}
