#include "main.h"

/**
 * _print_rot_13 - prints the rot13'ed string
 * @str: The string to be printed
 * @count: counts
 * Return: nothing
 */


void _print_rot_13(char *str, int *count)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (j = 0; str[j]; j++)
	{
		if (str[j] < 'A' || (str[j] > 'Z' && str[j] < 'a') || str[j] > 'z')
			_putchar(str[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (str[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}
	*count += j;
}
