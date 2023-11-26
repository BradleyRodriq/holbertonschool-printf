#include <unistd.h>
<<<<<<< HEAD
=======
#include <stdio.h>
>>>>>>> 9a490ca5157c0bd3834e22e260366c2c31fdf038
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
<<<<<<< HEAD
 * print_character - prints a character
 * @letter: the character to print
 */
void print_character(char letter)
{
	write(STDOUT_FILENO, &letter, 1);
}

/**
 *_strlen - prints the length of a string
 *@s: string to be counted
 *Return: length of string
 */
int _strlen(char *s)


{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * print_string - prints a string
 * @str: the string to be printed
 * Return: always 0
 */
void print_string(char *str)
{
	int len = 0;

	if (str == NULL)
		str = "(null)";
=======
 *
 */
int print_character(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	write(STDOUT_FILENO, &letter, 1);

	return (1);
}
/**
 *
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
>>>>>>> 9a490ca5157c0bd3834e22e260366c2c31fdf038
	while (str[len] != '\0')
	{
		len++;
	}
	write(STDOUT_FILENO, str, len);
<<<<<<< HEAD
}

/**
 * print_percent - prints a percent sign
 * @percent: the percent sign
 */
void print_percent(char percent)
{
	(void) percent;
	write(STDOUT_FILENO, "%", 1);
=======
	return len;
}
/**
 *
 */
int print_percent(va_list arg)
{
	(void) arg;
	write(STDOUT_FILENO, "%", 1);
	return (1);
>>>>>>> 9a490ca5157c0bd3834e22e260366c2c31fdf038
}

/**
 * default_case - handles default case when character is not a format specifier
 * @format: the default case
 * Return: number of characters written
 */

int default_case(const char *format)
{
	write(STDOUT_FILENO, "%", 1);
<<<<<<< HEAD
	write(STDOUT_FILENO, &format, 1);
=======
	write(STDOUT_FILENO, format, 1);
>>>>>>> 9a490ca5157c0bd3834e22e260366c2c31fdf038
	return (2);
}
