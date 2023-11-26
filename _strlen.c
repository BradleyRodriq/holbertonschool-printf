#include "main.h"
#include <string.h>
/**
 * _strlen - function that prints the size of a string
 * @s: parameter that receives the string
 * Return: it returns the size of the string
*/

int _strlen(char *s)
{
	int i;
	i = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (s[i] != '\0')
	{
		i++;
	}
	
	return (i);
}
