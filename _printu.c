#include "main.h"

/**
 * _printu - prints an unsigned int in hexa
 * @c: The unsigned integer to be converted to decimal
 * @count: A pointer to an integer that counts
 *         the number of characters printed
 * Return:  nothing
 */

void	_printu(unsigned int c, int *count)
{
	if (c > 9)
		_printu((c / 10), count);
	_putchar("0123456789"[c % 10]);
	*count = *count + 1;
}
