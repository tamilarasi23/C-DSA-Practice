#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>

int count_occurence(char *s, char c) {

	int count = 0;
	while (*s) {
		if(*s == c) {
			count++;
		}
		s++;
	}
	return count;
	

}
int main() {
	char s[20];
	char c;

	printf("Enter the string\n");
	scanf("%[^\n]",s);
	__fpurge(stdin);
	printf("Enter the character to check\n");
        scanf("%c",&c);
	
	int count = count_occurence(s,c);	
	printf("The no of %c is %d\n", c, count);
	return 0;

}
