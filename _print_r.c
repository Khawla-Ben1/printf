#include "main.h"

/**
 * _printr - prints the string given in reverse
 * @str: The sring to printed
 * @count: A pointer to an integer that counts
 *         the number of characters printed
 * Return: the string reversed
 */



void _printr(char *str, int *count)
{
	int i;

	i = -1;
	while (str[++i])
	{
		*count = *count + 1;
	}
	i--;
	while (i >= 0)
	{
		_putchar(str[i]);
	i--;
	}
}
