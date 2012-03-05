/*
 * Tools.c
 *
 *  Created on: Mar 6, 2012
 *      Author: option0417
 */

#include "Tools.h"

void addCity(City *city, Nodepath *nodepath) {
	city->cityList[city->size] = nodepath;
	city->size++;
}

short getShortestPath(City *srcCity, City *desCity) {
	return 0;
}
