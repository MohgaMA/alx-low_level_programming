#include "main.h"
/*
 * main - the main function
 * Returns: 0
 */
int main (void)
{
	char c[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar("%c\n", c[]);
		i++;
	}
	return(0);
}
