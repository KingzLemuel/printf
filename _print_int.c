#include "main.h"
/**
 * _print_int - prints a given integer from variadic parameters
 * @args: variadic parameter
 *
 * Return: number of characters printed on Success
 */

int _print_int(va_list args)
{
	int i = 0;
	int digit;
	int my_array[10];
	char x[1];

	digit = va_arg(args, int);

	while (digit != 0)
	{
		my_array[i] = (digit % 10);
		digit = digit / 10;
		if (digit == 0)

		{	
            break;
        }

		{
			break;
		}

			i++;
	}


	{
		x[0] = ('0' + my_array[i]);
		digit += write(1, x, 1);
	}

	return (digit);
}
