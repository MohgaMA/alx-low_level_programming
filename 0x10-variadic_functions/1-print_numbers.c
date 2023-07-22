#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	va_start(num, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%u", va_arg(n, unsigned int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
