#include <stdio.h>
#include "main.h"
/**
*print_to_98 - prints natural
*numbers from n to 98
*@n:integer to start by
*return: returns nothing
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
			n++;
		}
	}
}
