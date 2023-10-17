#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: caracter string containg specifier
 * Return: number of caracter printed excluding null byte
 */

int	_printf(const char *format, ...)
{
	va_list ptr;
	int count = 0;

	va_start(ptr, format);
	while (*format != '\0')
	{
		if (*format == '%' && (*(format + 1) == 'c'
					|| *(format + 1) == 's' || *(format + 1) == '%'))
		{
			format++;
			count += _check(ptr, *format);
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(ptr);
	return (count);
}
