/*
 * OPUtils.c
 *
 *  Created on: 2012/5/1
 *      Author: 1010481
 */
#include "OPUtils.h"

unsigned int* getRandomList(int _size) {
	int size = 10;
	int index = 0;

	if (_size > 0) {
		size = _size;
	}

	unsigned int* list = (unsigned int*)malloc(sizeof(unsigned int) * size);

	srand(time(NULL));
	while (index < size) {
		list[index++] = rand() % size + 1;
	}

	return list;
}

void showList(unsigned int* list, int size) {
	int index = 0;
	while (index < size) {
		printf("%d ", *(list+index++));
	}printf("\n");
}

clock_t getClock() {
	return clock();
}
