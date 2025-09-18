#include <stdio.h>
#include <limits.h>

int myAtoi(const char *s) {
	int i = 0;
	int sign = 1;
	long num = 0;

	while(s[i]==' ') {
		i++;
	}
	if(s[i] == '-') {
		sign = -1;
		i++;
	}

	while(s[i]>='0' && s[i]<='9') {
			num = num*10+(s[i]-'0');
		if(sign == 1 && num > INT_MAX) return INT_MAX;
		 if(sign == -1 && num < INT_MIN) return INT_MIN;
		 i++;
	}
	return (int)sign*num;
}
int main() {
    char str[] = "1234";
    printf("String: %s → Integer: %d\n", str, myAtoi(str));

    char str2[] = "-9876";
    printf("String: %s → Integer: %d\n", str2, myAtoi(str2));

    return 0;
}
