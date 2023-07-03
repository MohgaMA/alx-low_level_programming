#include <stdio.h>
#include "main.h"
/**
*print_last_digit - function that print last digit of a number
*@n: number to be targeted
*Return: returns the last digit
*/
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = n * -1;
		last = n % 100;
		_putchar(last + '0');
	}
	else
	{
		last = n % 10;
		_putchar(last + '0');
	}

	return (last);
}
