#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
#include<ctype.h>
#include<stdlib.h>

int my_to_lower(char *s) {
	while(*s) {
		*s = tolower(*s);
		s++;
	}
}
int cmpfun(const void *a, const void *b) {
	return *(char *)a-*(char *)b;
}
int check_anagram(char *s, char *c) {

	int i = 0;
	int count[256]= {0};
	if(strlen(s)!=strlen(c)) {
		return -1;
	}
	my_to_lower(s);
	my_to_lower(c);
	//printf("%s",s);
	qsort(s,strlen(s),sizeof(char),cmpfun);
	qsort(c,strlen(c),sizeof(char),cmpfun);
	 //printf("%s\n",s);
	  //printf("%s\n",c);
	if(strcmp(s,c)==0) {
		return 0;
	}
	return -1;
	

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
