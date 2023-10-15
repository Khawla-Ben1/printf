#include "main.h"

/**
 * _print_rot_13 - prints the rot13'ed string
 * @str: The string to be printed
 * Return: nothing
 */


int _print_rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] < 'n') || (str[i] >= 'A' && str[i] < 'N'))
			str[i] = str[i] + 13;
		else if (str[i] >= 'm' && str[i] <= 'z')
		{
			if (str[i] >= 'M' && str[i] <= 'Z')
				str[i] = str[i] - 13;
		}
		_putchar(str[i]);
		i++;
	}
	return (i);
}
