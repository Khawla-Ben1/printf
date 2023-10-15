#include "main.h"

/**
 * _putchar - prints a char
 * @c: char to print
 * Return: return 0 if succeded
 *
 */

int     _putchar(char c)
{
	return (write(1, &c, 1));
}
