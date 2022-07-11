# holbertonschool-printf
# printf

The **printf**function allows to display on the screen window a text that follows a format defined by the programmer.
_printf is the implementation of the prototype **int _printf(const char *format, ....);**. In addition this prototype is an implementation of printf standard function and variadic function.
This function receives a format **(const char *format)** and a list of arguments.
# Project requirements

All files will be compiled on Ubuntu 14.04 LTS

    - * Functions and programs will be compiled with gcc 4.8.4 using -Wall-Werror-Wextra and -pedantic flags
    - * Code must respect the Betty style
    - * Global variables are not allowed
    - * Allowed functions and macros:

           ** write (man 2 write)
           ** malloc (man 3 malloc)
           ** free (man 3 free)
           ** va_start (man 3 va_start)
           ** va_end (man 3 va_end)
           ** va_copy (man 3 va_copy)
           ** va_arg (man 3 va_arg)

# Required tasks
    *- Write the function that produces output with the conversion of c, s and % specifiers.
    *- Handle conversion the specifiers d, i.
    *- Create a man page for your function.
# Argument list
| The specifiers |Functions             |Description                       |
| ---------------|--------------------- |:--------------------------------:|
| s             | print_string         |print a string                     |
| c              | print_char           |print just a char                 |
| i             | print_integer        |print a number in base 10          |
| d             | print_integer        |print a decimal number in base 10  |

# The continuations of the files

#### _printf.c :
it is the function of **_printf** which uses the protype **int _printf(const char *format, ...);**.

#### _putchar.c :
it contains all the elements of **_putchar** which writes the character on the standard output stdout.

#### main.h:
contains all the prototypes of the project and the structure used for the **_printf** function

#### man_3_printf:
the custom **_printf** function for the manual page

#### printf_func.c:
contains functions (**print_c, print_s, print_i, print_d)** to convert prescriptors **c**, **s** , **i** and **d**
# The authors
Khady Thiam
Lucie Leroty

