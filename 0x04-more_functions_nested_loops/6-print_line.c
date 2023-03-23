#include "main.h"
#include <stdio.h>
/**
 * print_line - Draws a straight line according to parameter
 * @n: The number of lines to draw
 * Return: empty
 */
void print_line(int n)

{
	while (n -- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
