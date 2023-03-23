#include "main.h"
#include <stdio.h>

/**
 * prints_interger - prints an interger
 * Return: void
 *
 */
void print_number(int n)
{

	int divisor = 1;

	 Handle negative numbers
	if (n < 0)
	{
	_putchar('-');
	n *= -1;
	}

	Find the divisor
	while (n / divisor >= 10)
	{
	divisor *= 10;
	}
	Print the digits
	while (divisor != 0)
	{

	int digit = n / divisor;

	_putchar(digit + '0');
	n %= divisor;
	divisor /= 10;
	}
}
