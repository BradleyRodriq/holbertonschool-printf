#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - prints output according to format
 * @format: the format specifier
 * @...: the output to print
 * Return: the number of characters printed, or -1 if NULL format or output
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
			else if (*format == 'c')
				print_character(va_arg(arguments, int));
				count++;
			else if (*format == 's')
				char *str = va_arg(arguments, char *);

				if (str == NULL)
					str = "(null)";
				print_string(str);
				count += _strlen(str);
			else if (*format == '%')
				print_percent('%');
				count++;
			else
				count += default_case(format);
		}
		else
			write(STDOUT_FILENO, format, 1);
			count++;
		format++;
	}
	va_end(arguments);
	return (count);
}
