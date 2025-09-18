#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void int_array_pass(int (*a)[3],int r , int c) {  //int(*a)[3] or int a[][3] both are right
	int i = 0, j = 0;
	for(i=0;i<r;i++) {
		for(j=0;j<c;j++) {
			printf("%d ",(*a)[j]);   //(*a)[c] or a[r][c] both are right
			(*a)[j]*=(*a)[j];
		}
		printf("\n");
		a++;
	}
}
void print_int_arr(int a[][3],int r, int c) {
	int i = 0, j= 0; 
	for(i=0;i<r;i++) {
                for(j=0;j<c;j++) {
			 printf("%d ",a[i][j]);
		}
		printf("\n");
	 }
}
void print_int_arr_ptr(int **a,int r, int c) {
        int i = 0, j = 0; 
	printf("The 2d integer arrays are \n");
	for(i=0;i<r;i++) {
                for(j=0;j<c;j++) {
                         printf("%d ",a[i][j]);
			 a[i][j]*=3;
                }
                printf("\n");
         }
}
void print_int_arr_ptr_check(int **a,int r, int c) {
        int i = 0, j = 0;
	printf("The 2d integer arrays are \n");
        for(i=0;i<r;i++) {
                for(j=0;j<c;j++) {
                         printf("%d ",(*a)[j]);
                }
		a++;
                printf("\n");
         }
}
void char_arr_pass(char (*c)[3],int r) { // (*c)[] or c[][3] both are right
        int i = 0, j = 0; 
	printf("Thestrings  are \n");
	for(i=0;i<r;i++) {
		 printf("%s\n",*c);  // *c or c[r] both are right, when we use array index, we cannot increment , we can directly access it through index.
	 	 strcpy(*c,"to");
		 *c[0]='T';
		 c++;
	 }
}
void print_char_pass(char c[][3],int r) {
        int i = 0; 
printf("The strings are \n");	
	for(i=0;i<r;i++) {
                 printf("%s\n",c[i]);
         }
}
void print_char_ptr(char **c, int r) {
	int i = 0;
printf("The 2d integer arrays are \n");	
	for(i=0;i<r;i++) {
		printf("%s\n",*c);
		c++;
	}
}
void print_char_arr(char **c, int r) {
        int i = 0;
printf("The strings are \n");
        for(i=0;i<r;i++) {
                printf("%s\n",c[i]);
        }
}
int main() {
	int a[][3]={{0,1,2},{3,4,5}};
	int_array_pass(a,2,3);
	print_int_arr(a,2,3);
	
	char c[][3] = {"Hi","Pi"};
	char_arr_pass(c,2);
	print_char_pass(c,2);

	int *arr[3];
	int i = 0,j=0;
	for(i=0;i<3;i++) {
		arr[i]=(int *)malloc(3*sizeof(int));
	}
	printf("Enter the values for 2 d array\n");
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			scanf("%d",&arr[i][j]);
		}
        }
	print_int_arr_ptr(arr,3,3);
	print_int_arr_ptr_check(arr,3,3);
	

	char *crr[3];
	printf("Enter the string\n");
	for(i=0;i<3;i++) {
                crr[i]=(char *)malloc(3*sizeof(char));
        }
	for(i=0;i<3;i++) {
		scanf("%s",crr[i]);
	}
	print_char_ptr(crr,3);

	int **dp;
	dp = (int **)malloc(3*sizeof(int *));
        for(i=0;i<3;i++) {
                dp[i]=(int *)malloc(3*sizeof(int));
        }
	printf("Enter the values for 2 d array\n");
        for(i=0;i<3;i++) {
                for(j=0;j<3;j++) {
                        scanf("%d",&dp[i][j]);
                }
        }
        print_int_arr_ptr(dp,3,3);


        char **dpc;
	dpc = (char **)malloc(3*sizeof(char *));
        for(i=0;i<3;i++) {
                dpc[i]=(char *)malloc(3*sizeof(char));
        }
	printf("Enter the string\n");
        for(i=0;i<3;i++) {
                scanf("%s",dpc[i]);
        }
        print_char_arr(dpc,3);
}
