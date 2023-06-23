#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - block of code
 * Return: 0
 */
int main(void)
{
	int f = 0;
	int s = 0;

	while (f < 9)
	{
		while (s <= 9)
		{
			if (!(s != f && f > s) && f != s)
			{
				putchar(f + '0');
				putchar(s + '0');
				putchar(',');
				putchar(' ');
			}
			s++;
		}
		s = 0;
		f++;
	}
	return (0);
}
