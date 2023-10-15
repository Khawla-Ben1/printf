#include "main.h"

/**
 * _printd - prints an unsigned int in hexa
 * @c: The integer to be converted to decimal
 * @count: A pointer to an integer that counts
 *         the number of characters printed
 * Return: nothing
 */


void	_printd(int c, int *count)
{
	long	nb;

	nb = c;
	if (nb < 0)
	{
		_putchar('-');
		*count = *count + 1;
		nb *= -1;
	}
	if (nb > 9)
	{
		_printd((nb / 10), count);
		_printd((nb % 10), count);
	}
	else
	{
		_putchar("0123456789"[nb]);
		*count = *count + 1;
	}
}
