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
			put_str("\\x0");
			count += 2;
			_printx(c[i], 'X', &count);
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
