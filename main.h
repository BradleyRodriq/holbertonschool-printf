#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

<<<<<<< HEAD
void print_character(char letter);
void print_string(char *str);
void print_percent(char percent);
int _printf(const char *format, ...);
int _strlen(char *s);
int default_case(const char *format);
int format_specifier(char *format, va_list arguments, int *count);
=======
int print_character(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int _printf(const char *format, ...);
int _strlen(char *s);
int default_case(const char *format);

typedef struct printf
{
char *charType;
int (*print)(va_list arg);
} printf_t;
>>>>>>> 9a490ca5157c0bd3834e22e260366c2c31fdf038

#endif
