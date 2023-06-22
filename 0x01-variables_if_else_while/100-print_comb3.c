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
	int s = 1;

	while (f < 9)
	{
		putchar(f + '0');
		putchar(s + '0');

		while (s < 10)
		{
			if (s == f)
			{
			s++;
			continue;
			}

			putchar(',');
			putchar(' ');

			s++;
		}

		f++;
		s = f + 1;
	}
	putchar('\n');
	return (0);
}
