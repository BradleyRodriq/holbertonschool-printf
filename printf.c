#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - print formatted output
 * @format: the format specifier
 * Return: The number of characters printed, or -1 if its an error
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list arguments;

	va_start(arguments, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			count = format_specifier((char *)format, arguments, &count);
		}
		else
		{
			write(STDOUT_FILENO, format, 1);
			count++;
		}
		format++;
	}
	va_end(arguments);
	return (count);
}
