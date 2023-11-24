#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 *
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
 *
 */
void print_string(char *str)
{
	int len = 0;

	if (str == NULL)
	{
		write(STDOUT_FILENO, "(null)", 6);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	write(STDOUT_FILENO, str, len);
}

/**
 *
 */
void print_percent(char percent)
{
	(void) percent;
	write(STDOUT_FILENO, "%", 1);
}
