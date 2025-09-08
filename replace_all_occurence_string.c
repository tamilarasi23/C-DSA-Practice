#include<stdio.h>
#include<string.h>

void replace_old_to_new(char *s,char *old, char *new, char *result) {
	
	int  i=0,j=0;
	int old_len = strlen(old);
	int new_len = strlen(new);

	while(s[i]!='\0') {
		if(strncmp(&s[i],old,old_len)==0) {
			strcpy(&result[j],new);
			i+=old_len;
			j+=new_len;
		}
		result[j++]=s[i++];	
	}
	result[j]='\0';

}
int main() {
	char s[] = "This is my first program";
	char old [] = "first";
	char new[] = "second";
	char result[200];
	replace_old_to_new(s,old,new,result);
	printf("%s\n",result);
	return 0;

}
