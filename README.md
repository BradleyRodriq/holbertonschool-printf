<<<<<<< HEAD
# `_printf` Function

This repository contains a simple implementation of the `_printf` function in C,
which formats and prints data according to the specified format string.

## Files

- `_printf.c`: Contains the implementation of the `_printf` function.
- `function_helpers.c`: Contains helper functions for specific conversion specifiers.
- `main.h`: Header file with function prototypes and struct definition.

## Function Description

The `_printf` function formats and prints data according to the specified format.
It supports the following conversion specifiers:

- `%c`: Print a character.
- `%s`: Print a string.
- `%%`: Print a percent sign.
- `%i`, `%d`: Print integers.

## Function Signature

```c
int _printf(const char *format, ...);

Helper Functions
print_character: Prints a character.
print_string: Prints a string.
print_percent: Prints a percent sign.
print_integers: Prints integers.

#include <stdio.h>
#include "main.h"

int main(void)
{
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello, World!");
    _printf("Percent Sign: %%\n");
    _printf("Integer: %d\n", 42);

    return 0;
}

Build and Test
To build and test the _printf function, you can use the following commands:

bash
Copy code
gcc -Wall -Wextra -Werror -pedantic *.c -o printf_test
./printf_test
Contributing
Feel free to contribute to the project by opening issues or submitting pull requests.

License
This project is licensed under the MIT License.

Copy and paste this content into a file named `README.md` in the
root of your project directory. Adjust it as needed based on your project's specifics.
=======
# holbertonschool-printf
>>>>>>> 0c003f3c9b62f95264c31e000b8cde1ee9711870
