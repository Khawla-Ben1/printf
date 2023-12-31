#include "main.h"

/**
 * ft_isprint - checks if a character is printable
 * @c: the character to check
 * Return: 1 if printable, 0 otherwise
 */

static int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/**
 * count_n - count
 * @c: the char
 * Return: 0 or 1
 */


int	count_n(char c)
{
	if (c < 16)
		return (1);
	else
		return (0);
}

/**
 * _printss - prints a string
 * @c: the string to print
 * Return: length of the string
 */


int	_printss(char *c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (!c)
		return (_prints("(null)"));
	while (c[i])
	{
		if (!ft_isprint(c[i]))
		{
			put_str("\\x");
			count += 1;
			if (count_n(c[i]) == 1)
			{
				put_str("0");
				count += 1;

			}
			_printx(c[i], 'X' , &count);
		}
		else
		{
			_putchar(c[i]);
			count++;
		}
		i++;
	}
	return (i);
}
