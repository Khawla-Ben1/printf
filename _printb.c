#include "main.h"

/**
 * _printb - the unsigned int argument is converted to binary
 * @c: The argument to be converted to binary
 * @count: A pointer to an integer that counts
 *         the number of characters printed
 * Return: nothing
 */


void _printb(unsigned int c, int *count)
{
	int size;
	int i;
	unsigned int mask;

	size = sizeof(c) * 8;
	mask  = 1 << (size - 1);
	for (i = 0; i < size; i++)
	{
		if (c & mask)
		{
			_putchar('1');
			*count = *count + 1;
		}
		else
		{
			  _putchar('0');
			*count = *count + 1;
		}
		mask >>= 1;
	}
}
