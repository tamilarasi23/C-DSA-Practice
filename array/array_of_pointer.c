#include<stdio.h>
#include<stdlib.h>
int main() {
	int *a[5]; //array of 5 pointers
	int i = 0, j = 0;
	//I am going to allocate memory for those 5 pointers which of each 3 columns
	
	for(i=0;i<5;i++) {
		a[i]=(int *)malloc(3*sizeof(int));	
	}
	//I am going to get the value from user for all 5 rows of 3 columns
	 for(i=0;i<5;i++) {
		  for(j=0;j<3;j++) {
			  scanf("%d",&a[i][j]);
		  }
	 }
	 //i am goign to print those values
	  for(i=0;i<5;i++) {
                  for(j=0;j<3;j++) {
                          printf("%d ",a[i][j]);
                  }
		  printf("\n");
         }
	return 0;

}
