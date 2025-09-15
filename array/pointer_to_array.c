#include<stdio.h>
#include<stdlib.h>

void foo();
int main() {
	//2 d array with 5 rows and 3 columns
	int a[][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};
	//I am going to assign arr to pointer to an array
	int r =0;
	foo(a);
	for (r=0;r<15;r++) {
		printf("%d ",(*a)[r]);
	}
	printf("\n");
	return 0;
}
void foo(int (*ptr)[3]) {
	int r, c = 0;
	
	for (r=0;r<5;r++) {
		for(c=0;c<3;c++) {
			(*ptr)[c]++;
			printf("%d ",(*ptr)[c]);
		}
		ptr++; // will jump to next arr[1][0]
		printf("\n");
	}
}
