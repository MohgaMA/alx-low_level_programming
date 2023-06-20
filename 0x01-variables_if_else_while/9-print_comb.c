#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - block of code
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(c + '0');
		++c;
	}
	putchar('\n');
	return (0);
}
