#include "main.h"

/**
 * print_sign -prints the sign of a number
 * @n: The number to be checked
 * return 1 for positive num, -1 for negative num or zero for anything else
 */

int print_sign(int n)

{
	int print_sign(int n) 
	{
  if (n > 0) 
  {
    printf("+");
    return 1;
  } 
  else if (n == 0) 
  {
    printf("0");
    return 0;
  } 
  else {
    printf("-");
    return -1;
  }
}
