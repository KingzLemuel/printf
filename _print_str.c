#include "main.h"
/**
 * print_str - prints a variadic string to std out
 * @args: variadic parameter
 * Return: number of character printed
*/
int _print_str(va_list args)
{
	int counter = 0;
	int i;
	char *my_string;

	my_string = va_arg(args, char *);
	if (my_string == NULL)
		return (-1);

	while (my_string[i])
	{
		counter = write(1, &my_string[i], 1);
		i = i + 1;
	}

	return (counter);
}
	