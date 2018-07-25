/*
 * =====================================================================================
 *       Filename:  hello.c
 *    Description:  Check this program, is there's something wrong?
 *        Created:  07/25/18
 *         Author:  W.D Su
 * =====================================================================================
 */

#include <stdio.h>

/*
 * 1. May warnning since No "return", but most compiler not, Why?
 * Ans: 
 * 	After C99, reaching the } that terminates the main function returns a value of 0.
 * 	It's undefined behavior before C99.
 */
int main(void) {
  printf("hello, world\n");
}
