#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: caracter string
 * Return: number of caracter printed excluding null byte
 */

int	_printf(const char *format, ...)
{
	va_list	ptr;
	int i;
	int count;

	count = 0;
	i = 0;
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			count += _check(ptr, format[i]);
		}
		else if (format[i] != '\0')
			count += _putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (count);
}
