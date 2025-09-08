#include<stdio.h>
#include<string.h>

int count_words(char *s) {
	
	int inword = 0;
	int count = 0;
	
	while(*s) {
		if(*s == ' ' || *s == '\t' || *s == '\n') {
			inword = 0;
		}
		else {
			if(inword==0) {
				count++;
				inword = 1;
			}
		}
		*s++;
	}
	return count;

}
int main() {
	char s[] = "This is my first program";
	int count = count_words(s);
	printf("%d\n",count);
	return 0;

}
