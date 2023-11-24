#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
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
			if (*format != '\0')
			{
				if (*format == 'c')
				{
					print_character(va_arg(arguments,int));
					count ++;
				}
				else if (*format == 's')
				{
					char *str;

					str = va_arg(arguments, char *);
					print_string(str);
					count += _strlen(str);
				}
				else if (*format == '%')
				{
					print_percent('%');
					count++;
				}
				else
				{
					write(STDOUT_FILENO, "%", 1);
					write(STDOUT_FILENO, format, 1);
					count += 2;
				}
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
