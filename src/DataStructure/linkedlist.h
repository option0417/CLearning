/*
 * =====================================================================================
 *       Filename:  linkedlist.h
 *    Description: Just a practice for LinkedList use C. 
 *        Version:  1.0
 *        Created:  07/25/18 10:07
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  W.D Su
 *   Organization:  
 * =====================================================================================
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef struct node Node;
typedef struct linkedlist LinkedList;

int head();
int tail();
void add(LinkedList*, int);
void remove(LinkedList*);
int size();

struct node {
    int val;
    node* next;
};

struct linkedlist {
    Node* headNode;
    Node* tailNode;
    Node* currNode;
    int nodeCnt;
    int (*head)();
    int (*tail)();
    void (*add)(LinkedList*, int);
    void (*remove)(LinkedList*);
    int (*size)();
};

LinkedList* createLinkedList();

#endif /* LINKEDLIST_H_ */
