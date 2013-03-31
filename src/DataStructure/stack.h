/*
 * Stack.h
 *
 *  Created on: Mar 31, 2013
 *      Author: option0417
 */

#ifndef STACK_H_
#define STACK_H_

typedef struct stack Stack;

void initialCapacity(int, Stack*);
void push(int, Stack*);
int  pop(Stack*);
int  top(Stack*);
int  size(Stack*);

struct stack{
	unsigned int* valueList;
	unsigned int  valueSize;
	unsigned int  currValueSize;
	void          (*initialCapacity) (int, Stack*);
	void          (*push) (int, Stack*);
	int           (*pop) (Stack*);
	int           (*top) (Stack*);
	int           (*size) (Stack*);
};

Stack* createStack(int );

#endif /* STACK_H_ */
