#include "main.h"
#include <stdio.h>

/**
 * print_square - prints square
 * @size: parameter
 * Return: void
 */

void print_square(int size)
{
	int incl, inc2;

	if (size > 0)
	{
		for (incl = 0; incl < size; incl++)
		{
			for (inc2 = 0; inc2 < (size - 1); inc2++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}

	}
	else
	{
		putchar('\n');
	}
}
