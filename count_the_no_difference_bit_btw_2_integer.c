#include<stdio.h>

int no_of_diff_bit(int a, int b) {
	int num = a ^ b;
	int count = 0;
	while(num) {
		num = num & (num-1);
		count++;
	}
	printf("The no of difference bit %d\n",count);
	return 0;
}
int main() {
	int a = 0, b = 0;
	printf("Enter the number\n");
	scanf("%d %d", &a, &b);
	no_of_diff_bit(a,b);
	return 0;
}
