#include <stdio.h>
#include "main.h"
/**
*print_last_digit - function that print last digit of a number
*@n: number to be targeted
*Return: returns the last digit
*/
int print_last_digit(int n)
{
	int last = n % 10;

	if (lastdigit < 0)
	last *= -1;

	_putchar (last + '0');
	return (last);
}
