#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>

char non_repeated_occurence(char *s) {

	int count[256] = {0};
	char *temp = s;
	while (*temp) {
		count[*temp]++;
		temp++;
	}
	while(*s) {
		if(count[*s]==1) {
			return *s;
		}
		s++;
	}
	return '\0';

}
int main() {
	char s[20];

	printf("Enter the string\n");
	scanf("%[^\n]",s);
	
	char count = non_repeated_occurence(s);	
	if(count) {
		printf("The first single letter %c \n", count);
	}
	else {
		printf("No single letter\n");
	}

	return 0;

}
