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
	int t = 0;
	int o = 0;

	while (f <= 9)
	{
		while (s <= 9)
		{
			while (t <= 9)
			{
				while (o <= 9)
				{
					if (t < o)
					{
						if (f != s != t != o)
						{
							putchar(f + '0');
							putchar(s + '0');
							putchar(' ');
							putchar(t + '0');
							putchar(o + '0');

							putchar(',');
							putchar(' ');
						}
						else
						{
							putchar('\n');
						}
					}
					o++;
				}
				t++;
				o = 0;
			}
			s++;
			t = 0;
		}
		f++;
		s = 0;
	}
}
