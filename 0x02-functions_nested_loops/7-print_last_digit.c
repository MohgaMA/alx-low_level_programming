#include <stdio.h>
#include "main"
/**
*print_last_digit - function that print last digit of a number
*@n: number to be targeted
*Return: returns the last digit
*/
int print_last_digit(int n)
{
	int last = n % 10;
	return (last);
}
