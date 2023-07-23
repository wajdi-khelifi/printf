#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int chars_printed = 0;

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            // Handle conversion specifier
            switch (*format) {
                case 'c':
                    // Print a single character
                    putchar(va_arg(args, int));
                    chars_printed++;
                    break;
                case 's':
                    // Print a string
                    chars_printed += printf("%s", va_arg(args, const char *));
                    break;
                case '%':
                    // Print a single '%' character
                    putchar('%');
                    chars_printed++;
                    break;
                default:
                    // Invalid conversion specifier, just print the character after '%'
                    putchar('%');
                    putchar(*format);
                    chars_printed += 2;
                    break;
            }
        } else {
            // Regular character, print it
            putchar(*format);
            chars_printed++;
        }
        format++;
    }

    va_end(args);
    return chars_printed;
}
