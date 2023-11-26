#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_character - prints a char
 * @arg: arguments received from printf
 * Return: returns 1
 */
int print_character(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	write(STDOUT_FILENO, &letter, 1);

	return (1);
}
/**
 * print_string - prints a string
 * @arg:args received from printf
 * Return: returns the len of the string
 */
int print_string(va_list arg)
{
	char *str;
	int len;

	len = 0;
	str = va_arg(arg, char *);

	if (str == NULL)
	{
		write(STDOUT_FILENO, "(null)", 6);
		return (6);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	write(STDOUT_FILENO, str, len);
	return (len);
}
/**
 * print_percent - prints % sign
 * @arg: args received from printf
 * Return: returns 1
 */
int print_percent(va_list arg)
{
	(void) arg;
	write(STDOUT_FILENO, "%", 1);
	return (1);
}

/**
 * default_case - handles default case when character is not a format specifier
 * @format: the default case
 * Return: number of characters written
 */

int default_case(const char *format)
{
	write(STDOUT_FILENO, "%", 1);
	write(STDOUT_FILENO, format, 1);
	return (2);
}
