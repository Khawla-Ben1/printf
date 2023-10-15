#include "main.h"

/**
 * _printx - prints an unsigned int in hexa
 * @c: The unsigned long int to be converted to hexa
 * @x: indicating whether to use lowercase x or uppercase X
 * @count: A pointer to an integer that
 *         counts number of characters printed
 * Return: nothing
 */

void	_printx(unsigned long c, char x, int *count)
{
	char	*str;

	if (x == 'x')
		str = "0123456789abcdef";
	else
		str = "0123456789ABCDEF";
	if (c >= 16)
	{
		_printx((c / 16), x, count);
		_printx((c % 16), x, count);
	}
	else
	{
		_putchar(str[c]);
		*count = *count + 1;
	}
}
