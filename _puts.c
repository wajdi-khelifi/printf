#include "main.h"

/**
 * _puts - prints a string
 * new line, to stdout.
 * @string: input string
 * Return: count of string.
 */
int _puts(char *string)
{
	int contador = 0;

	while (*string)
	{
		if (_putchar(*string) == -1)
		       return (-1);	
		string++;
		contador++;
	}
	return (contador);
}
