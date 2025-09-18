#include<stdio.h>
#include<string.h>

void string_compression(char *s, char *result) {

	while(*s) {
		char c = *s;
		int count = 0;

		while(*s==c) {
			count++;
			s++;
		}
		*result++=c;
		result +=sprintf(result,"%d",count);
	}
	*result='\0';

}
int main() {
	char s[] = "abbbccc";
	char result[20];
	string_compression(s,result);
	printf("%s\n",result);
	return 0;

}
