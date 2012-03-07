/*
 * CityMap.c
 *
 *  Created on: Mar 6, 2012
 *      Author: option0417
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CityMap.h"


City** createMap() {
	City *map[10];
	int i = 0;

	for (i = 0; i < 10; i++) {
		char *tmp = (char*)malloc(sizeof(char[10]));
		tmp[0] = 'C';
		tmp[1] = 'i';
		tmp[2] = 't';
		tmp[3] = 'y';
		tmp[4] = '_';

		int num = ++i;
		char str = (char)(((int)'0') + num);
		strcat(tmp, &str);
		map[i] = createCity(tmp);
	}

	addCity(map[0], getNodepath(map[1], 180));

	return map;
}


City* createCity(char* name) {
	City *city = (City*)malloc(sizeof(City));
	city->name = name;

	return city;
}

Nodepath* getNodepath(City* city, int length) {
	Nodepath *ptr = (Nodepath*)malloc(sizeof(Nodepath));
	ptr->city = city;
	ptr->length = length;
	return ptr;
}
