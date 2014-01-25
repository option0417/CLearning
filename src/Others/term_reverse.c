
#include "term_reverse.h"
#include "reverse.h"

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
