#include "main.h"
/**
 * _print_cent - prints a character to std out
 * @args: variadic parameter
 * Return: number of character printed
*/
int _print_cent(va_list args)
{
	(void)args;

	write(1, "%", 1);

	return (1);
}

