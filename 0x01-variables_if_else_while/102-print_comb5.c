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

	while (f <= 7)
	{
		while (s <= 8)
		{
			while (t <= 9)
			{
				while ((o <= 9)
				{

					if ((f < s && s < t) && ((f != s) && (s != t)))
					{
						putchar(f + '0');
						putchar(s + '0');
						putchar(' ');
						putchar(t + '0');
						putchar(o + '0');

						if ((f == 9) && (s == 8) && (t == 9) && (o == 9))
							putchar('\n');
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
				t++;
			}
			t = 0;
			s++;
		}
		s = 0;
		f++;
	}
	return (0);
}
