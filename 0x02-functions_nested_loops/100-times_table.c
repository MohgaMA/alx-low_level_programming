#include "main.h"
/**
*print_times_table - prints the  times table with
*parameter
*@n: parameter
*Return: returns nothing
*/
void print_times_table(int n)
{
	if (n < 15 && n > 0)
	{
		int f, s = 0;

		for (f = 0 ; f <= n ; f++)
		{
			for (s = 0 ; s <= n ; s++)
			{
				int table = s * f;

				if (s != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (table >= 10 && table < 100)
				{
					_putchar(' ');
					_putchar(table / 10 + '0');
					_putchar(table % 10 + '0');
				}
				else if (table < 10 && s != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((table % 10) + '0');
				}
				else if (table >= 100 && s != 0)
				{
					_putchar((table / 100) + '0');
					_putchar((table / 10) % 10 + '0');
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
}
