#include<stdio.h>

int power_of_2(int a) {
	return (a > 0) && (a & a-1);
}
int main() {
	int a = 0;
	printf("Enter the number\n");
	scanf("%d", &a);
	if(power_of_2(a) == 0) {
		printf("Power of 2\n");
	}
	else {
		 printf("not a Power of 2\n");
	}

	return 0;
}
