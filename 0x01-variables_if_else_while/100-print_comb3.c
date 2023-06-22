#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - block of code
 * Return: 0
 */
int main(void)
{
	int c[2] = {0, 1};

	while ((c[0] && c[1] < 9) || (c[0] && c[1] == 9))
	{
		putchar(c[0] + '0');/* to print the c value*/
		putchar(c[1] + '0');

		if (c[0] != 9 && c[1] == 9)/* to define when the , and space will be put*/
		{
			if (c[0] == c[1])/*to make sure the repeted digit will not be printed*/
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
		c[1]++;
		c[0]++;
	}
	putchar('\n');
	return (0);
}
