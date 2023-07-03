#include <stdio.h>
#include "main.h"
/**
*jack_bauer - prints each minute of the day
*
*Return:returns 0
*/
void jack_bauer(void)
{
	int i = 0;

	while (i < 24)
	{
		int n = 0;

		while (n < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
			n++;
		}
		i++;
}
