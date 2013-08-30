#include "reverse.h"

void reverse(char* str, int length) {
	while (--length > 0) {
		(*str) ^= str[length];
		str[length] ^= (*str);
		(*str) ^= str[length];
		str++;
		length--;
	}
}
