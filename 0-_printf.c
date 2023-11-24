#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 *
 */

int _printf(const char *format, ...)

{
	int count = 0;

	va_list arguments;
	va_start(arguments, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				print_character(va_arg(arguments,int));
				count ++;
			}
			else if (*format == 's')
			{
				print_string(va_arg(arguments, char *));
				count += _strlen(va_arg(arguments, char *));
			}
			else if (*format == '%')
			{
				print_percent('%');
				count++;
			}
			else
			{
				write(STDOUT_FILENO, "?", 1);
				write(STDOUT_FILENO, format, 1);
				count = 2;
			}
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
