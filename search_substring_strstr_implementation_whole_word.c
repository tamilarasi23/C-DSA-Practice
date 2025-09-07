#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include <ctype.h>
int my_strstr( char *haystack, char *needle) {
	
	int i = 0, j = 0;
	int n  = strlen(needle);

	while(i!=strlen(needle)) {
		needle[i]=tolower(needle[i]);
		i++;
	}
	printf("%s\n",needle);

	if(!*needle) {
		return -1;
	}
	for(i=0;i<strlen(haystack);i++) {
		j=0;
		while(*needle && haystack[i+j] == needle[j]) {
			j++;
		}
		if(j==n) {
			if( i == 0 || isspace(haystack[i]) || haystack[i+n]=='\0' || isspace(haystack[i+n])) {
				return i;
			}
		}
	}
	return 0;
}
int main() {
    char *str, *substr;
    
    str = (char *)malloc(50*sizeof(char));
    printf("Enter the main string\n");
    scanf("%[^\n]",str);

    __fpurge(stdin);
    
    substr = (char *)malloc(50*sizeof(char));
    printf("Enter the substring string\n");
    scanf("%[^\n]",substr);

    

    int i = my_strstr(str, substr);
    if(i) {
    	printf("substring found %s and at the index:%d \n",substr, i);
    }
    free(str);
    str = NULL;
    free(substr);
    substr=NULL;
    return 0;
}
