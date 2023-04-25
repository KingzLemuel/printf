#include "main.h"

/**
 * print_dec - prints integer to base 10
 * @args: variadic parameter
 *
 * Return: number of characters printed on Success
 */

int _print_dec(va_list args)
{
	int i = 0;
	int counter = 0;
	int digit;
	int my_array[10];
	char x[1];

	digit = va_arg(args, int);

	while (digit != 0)
	{
		my_array[i] = (digit % 10);
		digit = digit / 10;
		if (digit == 0)
			break;
		else
			i++;
	}

	
	{
		x[0] = ('0' + my_array[i]);
		counter += write(1, x, 1);
	}

	return (counter);
}	
