#include "main.h"
#include <stdio.h>

/**
 * prints_triangle - prints a triangle
 * @size: parameter of a triangle
 */

void print_triangle(int size)
{
	if (size <= 0}
	{
	putchar('\n');
	return;
	}
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= i; j++)
	{
	putchar('#');
	}
	putchar('\n');
	}
}
