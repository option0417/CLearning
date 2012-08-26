/*
 * common.h
 *
 *  Created on: Aug 23, 2012
 *      Author: option0417
 */

#ifndef COMMON_H_
#define COMMON_H_

#include<time.h>

typedef struct {
	unsigned int* elementList;
	unsigned int size;
}SortingObj;

typedef struct {
	clock_t start;
	clock_t end;
}TimeMeasure;


void exchange(unsigned int* a, unsigned int* b);

#endif /* COMMON_H_ */
