#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...);
int (*checker(const char*))(va_list);
/**
 * struct func - for specifier to print
 * @t:compared character
 * @f: for function printer which handles printing
 * 
*/
typedef struct func
{
    char *t;
    int (*f)(va_list);
}func_t;

int _print_char(va_list);
int _print_str(va_list);
int _print_cent(va_list);
int _print_int(va_list);
int _print_dec(va_list);

#endif
