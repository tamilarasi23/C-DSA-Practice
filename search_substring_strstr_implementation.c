#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

const char *my_strstr( const char *haystack, const char *needle) {
	if(!*needle) {
		return haystack;
	}
	for(;*haystack;haystack++) {
		const char *p = haystack;
		const char*n = needle;

		while(*p && *n && *p==*n) {
			p++;
			n++;
		}
		if(!*n) {
			return haystack;
		}
	}
	return NULL;
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

    

    const char *ptr = my_strstr(str, substr);
    if(ptr) {
    	printf("substring found %s and at the index:%ld \n",ptr, ptr-str);
    }
    free(str);
    str = NULL;
    free(substr);
    substr=NULL;
    return 0;
}
