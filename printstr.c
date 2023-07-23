#include "main.h"

/**
 * printstr - Print a custom string with special handling for non-printable characters.
 * @format: The format string (not used in this function).
 * @pa: The va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int printstr(char *format, va_list pa)
{
	char *string = va_arg(pa, char *);
	int contador = 0;
	char ch;

	(void)format;

	if (string == NULL)
		string = "(null)";

	while (*string)
	{
		ch = *string;
		if (ch < 32 || ch >= 127)
		{
			contador += _putchar('\\');
			contador += _putchar('x');
			contador += _putchar("0123456789ABCDEF"[ch / 16]);
			contador += _putchar("0123456789ABCDEF"[ch % 16]);
		}
		else
		{
			contador += _putchar(ch);
		}
		string++;
	}

	_putchar(-2);
	
	return (contador);
}
