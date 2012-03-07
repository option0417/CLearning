/*
 * CityMap.h
 *
 *  Created on: Mar 6, 2012
 *      Author: option0417
 */

#ifndef CITYMAP_H_
#define CITYMAP_H_

#include "Tools.h"

City** createMap();
City* createCity(char* name);
Nodepath* getNodepath(City* city, int length);


#endif /* CITYMAP_H_ */
