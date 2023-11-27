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
<<<<<<< HEAD
 *struct printf - struct for printf
 *@charType: receives format from array
 *print: function pointer to call functions depending on specifier
=======
 * struct printf - Struct for printf
 * @print: function pointer
>>>>>>> 68c0d3f2c9d1f1fe34db5d62534a52251dedf873
*/

typedef struct printf
{
char *charType
int (*print)(va_list arg);
} printf_t;


#endif
