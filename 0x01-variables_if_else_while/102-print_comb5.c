#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - block of code
 * Return: 0
 */
int main(void)
{
	int f, s;
	int first = 1;

	for (f = 0 ; f < 100 ; f++)
	{
		for (s = f ; s < 100 ; s++)
		{
			if (f != s)
			{
				if (!first)
				{
				putchar(',');
				putchar(' ');
				}
				putchar(f / 10 + '0');
				putchar(f % 10 + '0');
				putchar(' ');
				putchar(s / 10 + '0');
				putchar(s % 10 + '0');
				first = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
