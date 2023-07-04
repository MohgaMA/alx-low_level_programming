#include <stdio.h>
#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
	int f, s = 0;

	for (f = 0 ; f <= 9 ; f++)
	{
		for (s = 0 ; s <= 9 ; s++)
		{
			int table = s * f;

			if (s != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (table >= 10)
			{
				_putchar(table / 10 + '0');
				_putchar(table % 10 + '0');
			}
			else if (table < 10 && s != 0)
			{
				_putchar(' ');
				_putchar((table % 10) + '0');
			}
			else
			{
				_putchar(table % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
