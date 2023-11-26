#include <stdarg.h>`
#include <unistd.h>
#include "main.h"
/**
 * _printf - prints output according to format
 * @format: the format specifier
 * Return: the number of characters printed, or -1 if NULL format or output
 */
int _printf(const char *format, ...)
{
	int count, j;
	va_list args;
	printf_t types[] = {{"c", print_character}, {"s", print_string},
		{"%", print_percent}, {"i", print_integers}, {"d", print_integers},
	};
	va_start(args, format);
	count = 0;
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			j = 0;
			while (j < 5 && *format != *(types[j].charType))
				j++;
			if (j < 5)
			{
				count += types[j].print(args);
			}
			else
			{
				write(STDOUT_FILENO, "%", 1);
				write(STDOUT_FILENO, format, 1);
				count += 2;
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
