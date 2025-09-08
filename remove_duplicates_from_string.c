#include<stdio.h>
#include<string.h>

void remove_duplicates(char *s) {

	char *n = s;
	int count[256] = {0};

	while(*s) {
		if(count[*s]==0) {
			count[*s]++;
			*n = *s;
			n++;
			s++;
		}
		else {
			s++;
		}
	}
	*n = '\0';

}
int main() {
	char s[] = "programming";
	remove_duplicates(s);
	printf("%s\n",s);
	return 0;

}
