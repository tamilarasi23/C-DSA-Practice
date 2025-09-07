#include<stdio.h>
#include<string.h>

void reverse_string(char *s) {
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
	reverse_string(s);
	printf("%s\n",s);
	return 0;

}
