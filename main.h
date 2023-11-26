#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

void print_character(va_list arg);
void print_string(va_list arg);
void print_percent(va_list arg);
int _printf(const char *format, ...);
int _strlen(char *s);
int default_case(const char *format);

typedef struct printf
{
char charType;
void (*print)(va_list arg);
} printf_t;

#endif
