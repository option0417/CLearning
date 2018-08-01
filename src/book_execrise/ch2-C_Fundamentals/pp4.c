/*
 * =====================================================================================
 *       Filename:  pp4.c
 *    Description:  
 *        Created:  08/01/18
 *         Author:  W.D Su
 * =====================================================================================
 */

#include <stdio.h>


int main(void) {
  float amount = 0.0f;
  float tax = 0.05f;

  printf("Enter an amount: ");
  scanf("%f", &amount);

  printf("With tax added: $%f\n", amount * tax + amount);

  return 0;
}

