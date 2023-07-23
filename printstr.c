#include "main.h"

/**
 * print_custom_string - Print a custom string with special handling for non-printable characters.
 * @pa: The va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int print_custom_string(va_list pa)
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
	
	return (contador);
}
