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

	if (format == 'c')
	{
		print_character(va_arg(arguments, int));
		(*count)++;
	}
	else if (format == 's')
	{
		char *str = va_arg(arguments, char *);

		print_string(str);
		(*count) += _strlen(str);
	}
	else if (format == '%')
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
