#include<stdio.h>
#include<string.h>

char *my_strtok(char *str, char *d) {
	static char *next = NULL;

	if(str) {
		next = str;
	}

	if(!next || *next=='\0') {
		return NULL;
	}
	char *start = next;
	
	while(*next && !strchr(d,*next)) {
		next++;
	}
	if(*next) {
		*next = '\0';
		next++;
	}
	return start;
}
int main() {
	char s[]= "192.168.1.1";
	char d = '.';

	char *token = my_strtok(s,&d);


	while(token) {
		printf("%s\n",token);
		token = my_strtok(NULL,&d);
	}
	return 0;
}
