#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>

int check_pallindrome(char *s) {
	
	int len = strlen(s);
	if (len > 1) {
		char *start = s;
		char *end = s + len - 1;
		while(start < end) {
			if(*start!=*end) {
				return -1;
			}
			start++;
			end--;
		}
	}
	else {
		printf("Single character\n");
		return -1;
	}
	return 0;

}
int main() {
	char s[15];

	printf("Enter the string\n");
	scanf("%s",s);
	if(!check_pallindrome(s)) {
		printf("Pallindrome\n");
	}
	else {
		printf("Not a Pallindrome\n");
	}
	return 0;

}
