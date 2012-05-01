/*
 * BubbleSort.c
 *
 *  Created on: Apr 30, 2012
 *      Author: option0417
 */
#include "BubbleSort.h"

void bubbleSort(int *array, int size) {
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < size-i-1; j++) {
			if (array[j] > array[j+1]) {
				array[j] = array[j] ^ array[j+1];
				array[j+1] = array[j] ^ array[j+1];
				array[j] = array[j] ^ array[j+1];
			}
		}
	}
}
