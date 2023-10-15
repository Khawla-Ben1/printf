#include "main.h"

/**
 * _check - calls the appropriate prints functions based on the specifier
 * @args: variable argument list
 * @c: format specifier
 * Return: number of caracter printed excluding null byte
 */

int _check(va_list args, char c)
{
	int count;

	count = 0;
	if (c == 'c')
		count += _printc(va_arg(args, int));
	else if (c == 's')
		count += _prints(va_arg(args, char *));
	else if (c == 'p')
	{
		count += write(1, "0x", 2);
		_printx(va_arg(args, unsigned long), 'x', &count);
	}
	else if (c == 'd')
		_printd(va_arg(args, int), &count);
	else if (c == 'u')
		_printu(va_arg(args, unsigned int), &count);
	else if (c == 'x' || c == 'X')
		_printx(va_arg(args, unsigned int), c, &count);
	else if (c == '%')
		count += write(1, "%%", 1);
	else if (c == 'b')
		_printb(va_arg(args, unsigned int), &count);
	else if (c == 'o')
		_printo((unsigned long)va_arg(args, unsigned long), &count);
	else if (c == 'S')
		count += _printss(va_arg(args, char *));
	else if (c == 'r')
		_printr(va_arg(args, char *), &count);
	else if (c == 'R')
		count += _print_rot_13(va_arg(args, char *));
	return (count);
}
