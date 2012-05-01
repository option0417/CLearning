/*
 * OPUtils.c
 *
 *  Created on: 2012/5/1
 *      Author: 1010481
 */
#include "OPUtils.h"

int* getRandomList(int _size) {
	int size = 10;
	int index = 0;
	int* list;

	if (_size > 0) {
		size = _size;
	}
	list = (int*)malloc(sizeof(int) * size);

	srand(time(NULL));
	while (index < size) {
		list[index++] = rand() % 100000 + 1;
	}

	return list;
}

void showList(int* list, int size) {
	int index = 0;
	while (index < size) {
		printf("%d ", *(list+index++));
	}printf("\n");
}

clock_t getClock() {
	return clock();
}
