#include "main.h"

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
					putchar(va_arg(args, int));
					chars_printed++;
					break;
				case 's':
					chars_printed += printf("%s", va_arg(args, const char *));
					break;
				case '%':
					putchar('%');
					chars_printed++;
					break;
				default:
					putchar('%');
					putchar(*format);
					chars_printed += 2;
					break;
			}
		}
		else
		{
			putchar(*format);
			chars_printed++;
		}
		format++;
	}

	va_end(args);
	return (chars_printed);
}
