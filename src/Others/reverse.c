#include <stdio.h>

void reverse(char*, int);

int main(int argc, char **argv)
{
	char str[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
	
	printf("Orignal : %s\n", str);
	reverse(str, 5);
	printf("Reverse : %s\n", str);
	
	return 0;
}

void reverse(char* str, int length) {
	while (--length > 0) {
		(*str) ^= str[length];
		str[length] ^= (*str);
		(*str) ^= str[length];
		str++;
		length--;
	}
}
