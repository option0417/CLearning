/*
 * BTreeDFS.h
 *
 *  Created on: May 1, 2012
 *      Author: option0417
 */

#ifndef BTREEDFS_H_
#define BTREEDFS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * root : Root of Tree
 * size : Number of Nodes
 * val  : Value for Search
 * return = 0 : Not found
 * return = n : Found record and return search times
 */
int bTreeTrace(int* root, size_t size, int val);

#endif /* BTREEDFS_H_ */
