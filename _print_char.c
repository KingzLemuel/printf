#include "main.h"
/**
 * _print_char - prints a character to std out
 * @args: variadic parameter
 * Return: number of character printed
*/
int _print_char(va_list args)
{
char c = (char)va_arg(args, int);
int count = 0;
if (c)
{
count = write(1, &c, 1);
return (count);
}
return (0);
}
