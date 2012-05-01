/*
 * InsertionSort.c
 *
 *  Created on: Apr 30, 2012
 *      Author: option0417
 */
#include "InsertionSort.h"

void insertionSort(int* array, int size) {
	int i, j, val;

	for (i = 1; i < size; i++) {
		val = array[i];
		for (j = i-1; j >= 0; j--) {
			if (val < array[j]) {
				array[j+1] = array[j];
			} else {
				break;
			}
		}
		array[j+1] = val;
	}
}
