#include "main.h"

/**
 * _isuper - uppercase letters
 *  @c: char to check
 *
 *  Return:0 to 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
