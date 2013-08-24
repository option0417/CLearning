
#include <stdio.h>

void term_reverse(char*, int);
void reverse(char*, int);

int main(int argc, char **argv)
{
	char str[15] = "This is a book";
	
	printf("Orignal : %s\n", str);
	term_reverse(str, 14);	
	printf("Reverse : %s\n", str);
	
	return 0;
}

void term_reverse(char* str, int length) {
	reverse(str, length);	
	char* pt = str;
	while (*pt != '\0') {
		while ((*pt) != ' ' && *pt != '\0') pt++;
		reverse(str, (pt-str));
		pt++;
		str += (pt-str);
	}
	
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
