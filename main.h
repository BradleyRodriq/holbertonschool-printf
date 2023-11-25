#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

void print_character(char letter);
void print_string(char *str);
void print_percent(char percent);
int _printf(const char *format, ...);
int _strlen(char *s);
int default_case(const char *format);
int format_specifier(char *format, va_list arguments, int *count);

#endif
