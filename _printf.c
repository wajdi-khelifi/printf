#include "main.h"

/**
 * print_char - Prints a single character to stdout.
 *
 * @c: The character to be printed.
 *
 * Return: The number of characters printed (always 1).
 */
int print_char(char c)
{
	putchar(c);
	return (1);
}


/**
 * print_string - Prints a string to stdout.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed by printf function.
 */
int print_string(const char *str)
{
	return (printf("%s", str));
}

/**
 * _printf - function that handles format specifiers 'c', 's', and '%'.
 * @format: The format string containing the text and format specifiers.
 *
 * Return: The total number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int chars_printed = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					chars_printed += print_char(va_arg(args, int));
					break;
				case 's':
					chars_printed += print_string(va_arg(args, const char*));
					break;
				case '%':
					chars_printed += print_char('%');
					break;
				default:
					chars_printed += print_char('%');
					chars_printed += print_char(*format);
					break;
			}
		}
		else
		{
			chars_printed += print_char(*format);
		}
		format++;
	}

	va_end(args);
	return (chars_printed);
}
