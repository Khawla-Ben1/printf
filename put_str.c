#include "main.h"

/**
 * put_str - prints a string
 * @c: char to print
 * Return: 0
 */

void put_str(char *c)
{
	int i = 0;

	if (!c)
	{
		char null_str[] = "(null)";

		while (null_str[i] != '\0')
		{
			_putchar(null_str[i]);
			i++;
		}
		return;
	}
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
}
