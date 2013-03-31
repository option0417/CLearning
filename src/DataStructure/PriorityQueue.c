/*
 * PriorityQueue.c
 *
 *  Created on: May 2, 2012
 *      Author: option0417
 */
#include "PriorityQueue.h"

int* createPriorityQueue(int size) {
	int *node = (int*)malloc(sizeof(int) * size);
	int cnt = 0;
	while(cnt < size)	node[cnt] = -1;
	return node;
}

void add(int* root, int size, int val) {
	int cnt = -1;
	int flag = 0;
	while(++cnt < size) {
		if (root[cnt] == -1) {
			root[cnt] = val;
			flag = 1;
		}
	}

	if (flag) {

	}

	if (!flag) printf("Queue Full\n");
}

int read(int* root, int size) {
	return 0;
}

void destroy(int* root) {
	free(root);
}

