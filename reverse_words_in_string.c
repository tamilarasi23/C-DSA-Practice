#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reverse(char *start, char *end) {
	char temp;
	while(start<end) {
		temp = *start;
		*start = *end;
		*end = temp;
		end--;
		start++;
	}

}
void reverse_word_in_string(char *s) {

	char *word_start = NULL;
	char *word_end = NULL;
	
	reverse(s,s+strlen(s)-1);

	while(*s) {
		if(word_start == NULL && (!isspace(*s))) {
			word_start = s;
		}
		if(word_start && (isspace (*s) || *(s+1) == '\0')) {
			 word_end = isspace(*s) ? (s-1) : s;
			reverse(word_start, word_end);
			word_start = NULL;

		}
		s++;
	}

}
int main() {
	char s[] = "This is my first programming";
	reverse_word_in_string(s);
	printf("The words reversd string is : %s\n",s);
	return 0;

}
