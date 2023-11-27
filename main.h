#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int print_character(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int _printf(const char *format, ...);
int print_integers(va_list arg);
int default_case(const char *format);

/**
 *struct printf - struct for printf
 * @print: function pointer
 * @charType: specifier
*/

typedef struct printf
{
char *charType;
int (*print)(va_list arg);
} printf_t;


#endif
