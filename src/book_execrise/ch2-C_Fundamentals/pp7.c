/*
 * =====================================================================================
 *       Filename:  pp7.c
 *    Description:  Show how to pay the amount by $20, $10, $5, $1
 *        Created:  2018年08月09日
 *         Author:  W.D Su
 * =====================================================================================
 */

#include<stdio.h>

int payAmount(int pay, int* amount) {
  int cnt = 0;
  while(*amount >= pay) {
    *amount -= pay;
    cnt++;
  }

  return cnt;
}


int main(void) {
  int amount = 0;
  printf("Enter a dollat amount: ");
  scanf("%d", &amount);

  printf("$20 bills: %d\n", payAmount(20, &amount));
  printf("$10 bills: %d\n", payAmount(10, &amount));
  printf("$5 bills: %d\n", payAmount(5, &amount));
  printf("$1 bills: %d\n", payAmount(1, &amount));

  return 0;
}

