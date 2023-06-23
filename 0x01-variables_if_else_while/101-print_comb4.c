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

	while (f <= 7)
	{
		while (s <= 8)
		{
			while (t <= 9)
			{
				if ((f != s) && (f != t) && (s != t) && !(f > s && s > t) && !(t < f))
				{
					putchar(f + '0');
					putchar(s + '0');
					putchar(t + '0');

					if ((f == 7) && (s == 8) && (t == 9))
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
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
