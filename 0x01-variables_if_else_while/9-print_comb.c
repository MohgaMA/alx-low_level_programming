#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - block of code
 * Return: 0
 */
int main(void)
{
	char c = 0;

	while (c < 10)
	{
		if (c < 9)
			putchar(',');
		putchar('c');
	}
	putchar('\n');
	return (0);
}
