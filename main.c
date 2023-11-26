<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
=======
#include <limits.h>
#include <stdio.h>
>>>>>>> 9a490ca5157c0bd3834e22e260366c2c31fdf038
#include "main.h"

/**
 * main - Entry point
 *
<<<<<<< HEAD
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
=======
 * Return: Always 0
 */
int main(void)
{

	int len, len2;

	len = _printf(NULL);
	len2 = printf(NULL);
>>>>>>> 9a490ca5157c0bd3834e22e260366c2c31fdf038
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
