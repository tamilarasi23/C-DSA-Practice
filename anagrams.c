#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
#include<ctype.h>

int check_anagram(char *s, char *c) {

	int i = 0;
	int count[256]= {0};
	if(strlen(s)!=strlen(c)) {
		return -1;
	}
	while(*s && *c) {
		count[tolower(*s)]++;
		count[tolower(*c)]--;
		s++;
		c++;
	}
	for(i = 0; i < 256; i++) {
		if(count[i]!=0) {
			return -1;
		}
	}
	return 0;
	

}
int main() {
	char s[20];
	char c[20];

	printf("Enter the string\n");
	scanf("%[^\n]",s);
	__fpurge(stdin);
	printf("Enter the character to check\n");
        scanf("%[^\n]",c);
	
	if(!check_anagram(s,c)) {
		printf("Anagram\n");
	}
	else {
		printf("Not a anagram\n");
	}
	return 0;

}
