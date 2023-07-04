#include <stdio.h>
#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
	for (int f = 0 ; f <= 9 ; f++)
	{
		for (int s = 0 ; s <= 9 ; s++)
		{
			int table = s * f;
			
			if (table >= 10)
			{
				_putchar(table / 10 +'0');
				_putchar(table % 10 + '0');
			}
			else
			{
				_putchar(table % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
