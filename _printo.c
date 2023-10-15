#include "main.h"

/**
 * _printo - the unsigned int argument is converted to octal
 * @c: The argument to be converted to octal
 * @count: A pointer to an integer that counts
 *         the number of characters printed
 * Return: nothing
 */


void _printo(unsigned long c, int *count)
{
	if (c > 0)
	{
		_printo((c / 8), count);
		_putchar('0' + (c % 8));
		*count = *count + 1;
	}
}
