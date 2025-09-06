#include<stdio.h>
#include<string.h>

char *remove_space(char *s) {
	char *start = s;
	char *end = s + strlen(s) - 1;
	char temp;
	while(start < end) {
		temp = *start;
		*start = *end;
		*end = temp;

		*start++;
		*end--;
	}

}
int main() {
	char s[] = "This is my first program";
	remove_space(s);
	printf("%s\n",s);
	return 0;

}
