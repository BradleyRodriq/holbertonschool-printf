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
 *
 */
void print_string(char *str)
{
	int len = 0;

	if (str == NULL)
	{
		write(STDOUT_FILENO, "(nil)", 5);
		return;
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
