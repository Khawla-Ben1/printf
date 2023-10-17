#include "main.h"

/**
 * _check - calls the appropriate prints functions based on the specifier
 * @args: variable argument list
 * @c: format specifier
 * Return: number of caracter printed excluding null byte
 */

int _check(va_list args, char c)
{
	int count = 0;

	switch (c)
	{
		case 'c':
			count += _printc(va_arg(args, int));
			break;
		case 's':
			count += _prints(va_arg(args, char *));
			break;
		case 'p':
			count += write(1, "0x", 2);
			_printx(va_arg(args, unsigned long), 'x', &count);
			break;
		case 'd':
		case 'i':
			_printd(va_arg(args, int), &count);
			break;
		case '%':
			count += write(1, "%", 1);
			break;
		case 'b':
			_printb(va_arg(args, unsigned int), &count);
			break;
		case 'o':
			_printo((unsigned long)va_arg(args, unsigned long), &count);
			break;
		case 'r':
			_printr(va_arg(args, char *), &count);
			break;
		case 'R':
			_print_rot_13(va_arg(args, char *), &count);
			break;
		default:
			_putchar('%');
			_putchar(c);
	}
	return (count);
}
