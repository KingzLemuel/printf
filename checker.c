#include <stdarg.h>
#include "main.h"

/**
 * checker - checks that a character is a valid specifier
 * @format: the specifier (*char)
 * Return:poiter to function if successful
 *
*/
int (*checker(const char *format))(va_list)
{
int i;
func_t my_array[6] = {
{"c", _print_char},
{"s", _print_str},
{"%", _print_cent},
{"d", _print_dec},
{"i", _print_int},
{NULL, NULL}};

for (i = 0; my_array[i].t != NULL; i++)
{
if (*(my_array[i].t) == *format)
{
return (my_array[i].f);
}
}
return (NULL);
}
