#include "main.h"

/**
 * driver - Selector for the type of print function.
 * @format: Format string.
 *
 * Description: The function loops through the `selector[]` array of structs
 * Find the appropriate print function based on the given conversion specifier.
 *
 * Return: A pointer to the print function.
 */
int (*driver(char *format))(char *, va_list)
{
	int i;

	structype selector[] = {
		{"%c", printc},
		{"%s", printstr},
		{"%d", printint},
		{"%i", printint},
		{"%%", printpercent},
		{"%x", printhex},
		{"%X", printHEX},
		{"%o", printocta},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);

	for (i = 0; selector[i].q != NULL; i++)
	{
		if (format[1] == selector[i].q[1])
			return (selector[i].u);
	}

	return (NULL);
}
