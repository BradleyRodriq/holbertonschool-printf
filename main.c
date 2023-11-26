#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len2;

	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 = printf("%s", "This sentence is retrieved from va_args!\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("Len: %d\n", len);
		printf("Len2: %d\n", len2);
		fflush(stdout);
		return (1);
	}
	return (0);
}
