#include<stdio.h>
#include<string.h>
#include<ctype.h>

char *remove_space(char *s) {
	char *n = s;
	while(*s) {
		if(*s != ' ') {
			*n++ = *s++;
		}
		else {
			*s++;
		}
	}
	*n = '\0';

}
void to_lower(char *s) {
	while(*s) {
		*s = tolower(*s);
		s++;
	}
}
int check_pallindrome(char *s) {
	char temp;
	remove_space(s);
	to_lower(s);
	printf("%s\n",s);
	char *e = s + strlen(s)-1;
	while(s<e) {
		if(*s != *e) {
			return -1;
		}
		s++;
		e--;	
	}
	return 0;
}

int main() {
	char s[] = "A man a plan a canal Panama";
	if(!check_pallindrome(s)) {
		printf("Pallindrome \n");	
	}
	else {
		printf("Not a Pallindrome\n");
	}
	return 0;

}
