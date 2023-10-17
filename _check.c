#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _check - calls the appropriate prints functions based on the specifier
 * @args: variable argument list
 * @c: format specifier
 * @count: keep truck
 * Return: number of caracter printed excluding null byte
 */

int _check(va_list args, char c, int *count)
{
	int length = 0;

	if (c == 'c')
		length += _printc(va_arg(args, int), count);
	else if (c == 's')
		length += _prints(va_arg(args, char *), count);
	else if (c == 'p')
	{
		*count += write(1, "0x", 2)
		length += _printx(va_arg(args, unsigned long), 'x', count);
	}
	else if (c == 'd' || c == 'i')
		length += _printd(va_arg(args, int), count);
	else if (c == 'u')
		length += _printu(va_arg(args, unsigned int), count);
	else if (c == 'x' || c == 'X')
		length += _printx(va_arg(args, unsigned int), c, count);
	else if (c == '%')
	{
		*count += write(1, "%", 1);
		length += 1;
	}
	else if (c == 'b')
		length += _printb(va_arg(args, unsigned int), count);
	else if (c == 'o')
		length += _printo((unsigned long)va_arg(args, unsigned long), count);
	else if (c == 'S')
		length += _printss(va_arg(args, char *), count);
	else if (c == 'r')
		length += _printr(va_arg(args, char *), count);
	else if (c == 'R')
		length += _print_rot_13(va_arg(args, char *), count);
	else
	{
		*count += _putchar(c);
		length += 1;
	}
	return (length);
}
