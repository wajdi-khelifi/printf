#include "main.h"

/**
 * _printf - prints formatted data to stdout
 * @format: string that contains the format to print
 *
 * Description: The function uses the `driver` function to identify the
 * Print function for each conversion specifier in the format string.
 *
 * Return: number of characters written
 */
int _printf(char *format, ...)
{
	int written = 0;
	int (*structype)(char *, va_list);
	char q[3];
	va_list pa;

	if (format == NULL)
		return (-1);

	q[2] = '\0';
	va_start(pa, format);
	_putchar(-1);

	while (*format)
	{
		if (*format == '%')
		{
			structype = driver(format);
			if (structype)
			{
				q[0] = '%';
				q[1] = *(format + 1);
				written += structype(q, pa);
				format += 2;
			}
			else
			{
				written += _putchar(*format);
				format++;
			}
		}
		else
		{
			written += _putchar(*format);
			format++;
		}
	}
	_putchar(-2);
	va_end(pa);
	return (written);
}
