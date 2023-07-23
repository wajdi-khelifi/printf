#include "main.h"

/**
* driver - Selector for the type of print function.
* @format: Format string.
* Description:
*   The function loops through the `selector[]` array of structs to find the
*   appropriate print function based on the given conversion specifier in the
*   format string.
*
* @format: The format string containing the conversion specifier to be matched.
*
* Return:
*   A pointer to the corresponding print function if the conversion specifier
*   is found in the `selector[]` array; otherwise, returns NULL.
*/
int (*driver(char *format))(char *, va_list)
{
	int i;

/**
* structype - Structure to hold conversion specifiers and print functions.
* @q: Conversion specifier string.
* @u: Pointer to the corresponding print function.
*/

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
