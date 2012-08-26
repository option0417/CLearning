/*
 * common.c
 *
 *  Created on: Aug 23, 2012
 *      Author: option0417
 */

#include "common.h"

void exchange(unsigned int* a, unsigned int* b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
