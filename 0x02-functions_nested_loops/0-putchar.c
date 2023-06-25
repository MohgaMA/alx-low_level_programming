#include "main.h"
#include <stdio.h>
/*
 * main - the main function
 * Returns: 0
 */
int main (void)
{
	int i = 0;

	while (i < 8)
	{
		char c[i] = "_putchar";
		putchar("%c\n", c);
		i++;
	}
	return(0);
}
