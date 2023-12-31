#include "variadic_functions.h"
#include <stdio.h>
/**
 *  * print_strings - prints strings.
 *   * @separator: string to be printed between the strings.
 *    * @n: number of strings passed to the function.
 *     *
 *      * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
