#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 *
 */

int _printf(const char *format, ...)

{
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
			}
			else if (*format == 's')
			{
				print_string(va_arg(arguments, char *));
			}
			else if (*format == '%')
			{
				print_percent('%');
			}
			else
			{
				write(STDOUT_FILENO, "?", 1);
				write(STDOUT_FILENO, format, 1);
			}
		}
		else
		{
			write(STDOUT_FILENO, format, 1);
		}
		format++;
	}
	va_end(arguments);
	return (0);
}
