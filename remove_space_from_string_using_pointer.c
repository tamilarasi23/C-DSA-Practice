#include<stdio.h>
#include<string.h>

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
int main() {
	char s[] = "This is my first program";
	remove_space(s);
	printf("%s\n",s);
	return 0;

}
