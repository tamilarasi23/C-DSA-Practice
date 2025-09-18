#include<stdio.h>
#include<string.h>

char *remove_space(char *s) {
	char *n = s;
	while(*s) {
		if(*s >= 'a' && *s <='z') {
			*s = *s - 32;
		}
		s++;
	}

}
int main() {
	char s[] = "This Is My First Program";
	remove_space(s);
	printf("%s\n",s);
	return 0;

}
