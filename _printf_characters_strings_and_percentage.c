#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>

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
 * _printf - produce output according to a format
 * @format: the type of output
 * @...: the number of arguments
 * Return: always 0
 */
int _printf(const char *format, ...)
{
        va_list args;
        va_start(args, format);

        char ch;
        char *st;

        while (*format != '\0')
        {
                if (*format == '%')
                {
                        format++;
                        switch (*format)
                        {
                                case 'c':
                                        ch = va_arg(args, int);
                                        write(STDOUT_FILENO, &ch, 1);
                                        break;
                                case 's':
                                        st = va_arg(args, char*);
                                        write(STDOUT_FILENO, st, _strlen(st));
                                        break;
                                case '%':
                                        write(STDOUT_FILENO, "%", 1);
                                        break;
                                default:
                                        write(STDOUT_FILENO, format - 1, 2);
                                        break;
                        }
                }
                else
                {
                        write(STDOUT_FILENO, format, 1);
                }

                format++;
        }

        va_end(args);
        return (0);
}
