/*
 * BubbleSort.c
 *
 *  Created on: Apr 30, 2012
 *      Author: option0417
 */
#include "BubbleSort.h"

void bubbleSort(int *list, int size) {
	int i, j;
	int flag = 0;

	for (i = 0; i < size; i++) {
		for (j = 0; j < size-i-1; j++) {
			if (list[j] > list[j+1]) {
				list[j] = list[j] ^ list[j+1];
				list[j+1] = list[j] ^ list[j+1];
				list[j] = list[j] ^ list[j+1];
				flag = 1;
			}
		}
		if (!flag) {
			return;
		} else {
			flag = 0;
		}
	}
}
