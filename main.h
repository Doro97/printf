
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
// #include <unistd.h>

/**
 * struct types - specifiier structure for printf
 * @p: pointer to character specifier
 * @funct : function pointer to print functions
 */

typedef struct types
{
    char p;
    int (*func)(va_list);
}print_f;

int _printf(const char *format, ...);