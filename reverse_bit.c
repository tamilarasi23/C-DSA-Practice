#include<stdio.h>

int reverse_bit(unsigned int a) {
	unsigned int temp = 0;
	int i = 0;
	for (i = 0; i< 32; i++) {
		temp <<= 1;
		temp |= (a & 1);
		a >>= 1;
	}
	return temp;
}
int reverse_bit_with_same_no_bits(unsigned int a) {
        unsigned int rev = 0;
	unsigned int temp = a;
        int i = 0;
        int no_of_bits=0;

	while(temp) {
		temp>>=1;
		no_of_bits++;
	}

	for (i = 0; i< no_of_bits; i++) {
                rev <<= 1;
                rev |= (a & 1);
                a >>= 1;
        }
        return rev;
	
}
int main() {
	int a = 0;
	printf("Enter the number\n");
	scanf("%d", &a);
	unsigned int reverse_vale = reverse_bit(a);
	printf("The reversed value %u\n", reverse_vale);
	reverse_vale = reverse_bit_with_same_no_bits(a);
	printf("The reversed value %u\n", reverse_vale);
	return 0;
}
