/*
 * =====================================================================================
 *       Filename:  pp6.c
 *    Description:  Horner's Rule for pp5
 *        Created:  08/08/18
 *         Author:  W.D Su
 * =====================================================================================
 */

#include <stdio.h>


int calculate(int val) {
  return ((((3 * val + 2) * val - 5) * val - 1) * val + 7) * val - 6;
}

/*
 * ((((3x + 2)x - 5)x - 1)x + 7)x - 6
 * Ans: 
 * Result = 0 	(If x = 1)
 * Result = 92  (If x = 2)
 * Result = 762 (If x = 3)
 */
int main(void) {
  int x = 0;
  
  printf("Enter a value: ");
  scanf("%d", &x);

  printf("Result: %d\n", calculate(x));  

  return 0;
}
