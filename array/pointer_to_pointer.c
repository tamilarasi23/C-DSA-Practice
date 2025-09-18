#include<stdio.h>
#include<stdlib.h>

void foo();
int main() {
	//2 d array with 5 rows and 3 columns
	char *a[4] = {"Can","van","ran","tan"};
	//I am going to assign arr to pointer to an array
	int r =0;
	printf("The address os a is :%p\n",&a);
	printf("The address os a is :%p\n",&a[0][0]);
	foo(a);
	for (r=0;r<4;r++) {
		printf("%s ",a[r]);
		printf("\n");
	}
	return 0;
}
void foo(char **ptr) {
	printf("The address of ptr %p\n",ptr);
	int r = 0;	
	for (r=0;r<4;r++) {
		printf("%s",*ptr);
		printf("\n");
		ptr++;
	}
}
