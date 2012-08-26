/*
 * OPUtils.h
 *
 *  Created on: 2012/5/1
 *      Author: 1010481
 */

#ifndef OPUTILS_H_
#define OPUTILS_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int* getRandomList(int _size);
void showList(unsigned int* list, int size);
clock_t getClock();

#endif /* OPUTILS_H_ */
