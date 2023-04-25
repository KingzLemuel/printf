#include "main.h"

/**
 * _printf - prints a formatted a string
 * @format: prints the (char *)
 * @...unknown variadic parameters
 * Return: printed number of characters
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int counter = 0;
	int value = 0;
	int (*f)(va_list);
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			counter = counter + value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f = checker(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				counter += value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				counter += value;
				i = i + 2;
				continue;
			}
		}
	}
	return (counter);
}
