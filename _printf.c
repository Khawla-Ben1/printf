#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: caracter string
 * Return: number of caracter printed excluding null byte
 */

int	_printf(const char *format, ...)
{
	va_list	ptr;
	int i = 0;
	int count = 0;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			count += _check(args, format[i]);
		}
		else if (format[i] != '\0')
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
