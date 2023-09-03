#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int res, c;

	for (c = 63; c >= 1; c--)
	{
		res = n >> c - 1;
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
