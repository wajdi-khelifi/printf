#include "main.h"

/**
 * printstr - Print string with special handling for non-printable characters.
 * @format: The format string (not used in this function).
 * @pa: The va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int printstr(char *format, va_list pa)
{
	char *string = va_arg(pa, char *);
	int contador = 0;
	(void)format;

	if (string == NULL)
		string = "(null)";

	contador = _puts(string);

	return (contador);
}
