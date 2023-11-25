#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * format_specifier - handle format specifiers
 * @format: the specifier
 * @arguments: the va argument list
 * @count: the count of characters processed, is a pointer
 * Return: Always 0
 */
int format_specifier(char *format, va_list arguments, int *count)
{
        char specifier = *format;

        if (specifier == 'c')
        {
                print_character(va_arg(arguments, int));
                (*count)++;
        }
        else if (specifier == 's')
        {
                char *str = va_arg(arguments, char *);

                print_string(str);
                (*count) += _strlen(str);
        }
        else if (specifier == '%')
        {
                print_percent('%');
                (*count)++;
        }
        else
        {
                (*count) += default_case(format);
        }
        return (0);
}
