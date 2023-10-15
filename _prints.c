#include "main.h"
/**
 * _prints - prints a string
 * @c: char to print
 * Return: return the length of the str
 */

int	_prints(char *c)
{
	int i;

	i = 0;
	if (!c)
		return (_prints("(null)"));
	while (c[i])
	{
		_putchar(c[i]);
		i++;
	}
	return (i - 1);
}
