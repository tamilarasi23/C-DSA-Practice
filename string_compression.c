#include<stdio.h>
#include<string.h>

void string_compression(char *s, char *result) {
	int asic[256] = {0};
	int count = 0;
	while(*s) {
		if(asic[*s]==0) {
			*result++=*s;
			if(count!=0) {
				*result++ = count+'0';
				count=0;
			}
			asic[*s]++;
			count++;
		}
		else {
			asic[*s]++;
			count++;
		}
		s++;

	}

	*result='\0';

}
int main() {
	char s[] = "aaabbbccc";
	char result[20];
	string_compression(s,result);
	printf("%s\n",result);
	return 0;

}
