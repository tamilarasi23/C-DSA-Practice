#include<stdio.h>
#include<string.h>

void length_string(char *s) {
	
	printf("The strlen :%ld\n", strlen(s));
	char *n = s;
	while(*n) {
		n++;
	}	
	printf ("THe length of the string is :%ld\n",n-s);

}
int main() {
	char s[] = "This is my first program";
	length_string(s);
	printf("%s\n",s);
	return 0;

}
