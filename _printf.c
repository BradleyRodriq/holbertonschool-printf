#include <stdio.h>
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
	int count, j;
	va_list args;
	printf_t types[] = {
		{'c', print_character},
		{'s', print_string},
		{'%', print_percent},
	};
	va_start(args, format);
	count = 0;
	if (format == NULL)
	{
		return (-1);
	}
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			j = 0;
			while (j < 3 && *format != (types[j].charType))
				j++;
			if (j < 3)
			{
				types[j].print(args);
				count++;
			}
			else
			{
				write(STDOUT_FILENO, "%", 1);
				write(STDOUT_FILENO, format, 1);
				count += 2;;
			}
		}
		else
		{
			write(STDOUT_FILENO, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
