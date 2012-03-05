/*
 * DataStructure.h
 *
 *  Created on: Mar 6, 2012
 *      Author: option0417
 */

#ifndef DATASTRUCTURE_H_
#define DATASTRUCTURE_H_

typedef struct {
	char *name;
	struct Nodepath *cityList[10];
	unsigned short size;
}City;

typedef struct {
	City *ptr;
	unsigned short length;
}Nodepath;


#endif /* DATASTRUCTURE_H_ */
