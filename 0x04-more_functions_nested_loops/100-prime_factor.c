#include <stdio.h>
#include "main.h"

/**
 * prints_largest prime factor - prints largest prime factor
 * Return: void
 */
int main(void)
{
	long int n = 612852475143;
	long int i;

	while (n % 2 == 0)

	{
	n /= 2;
	i = 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
	while (n % i == 0)

		n /= i;
	}
	}
	if (n > 2)
	{
	i = n;
	}
	printf("%ld\n", i);
	return (0);
}
