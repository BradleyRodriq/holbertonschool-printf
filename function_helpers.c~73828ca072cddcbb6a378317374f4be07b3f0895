#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>
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
 * print_integers - prints integers
 * @arg: argument received from printf
 * Return: the amount of integers printed
 */

int print_integers(va_list arg)
{
	int num, i;
	char buffer[100];
	int index;
	int count;

	num = va_arg(arg, int);
	index = 0;
	i = 0;
	count = 0;

	if (num == INT_MIN)
	{
		write(STDOUT_FILENO, "-2147483648", 11);
		return (11);
	}
	if (num < 0)
	{
		write(STDOUT_FILENO, "-", 1);
		num = -num;
		count++;
	}
	if (num == 0)
	{
		write(STDOUT_FILENO, "0", 1);
		count++;
		return (count);
	}
	while (num > 0)
	{
		buffer[index++] = '0' + num % 10;
		num /= 10;
	}
	for (i = index - 1; i >= 0; i--)
	{
		write(STDOUT_FILENO, &buffer[i], 1);
		count++;
	}
	return (count);
}
