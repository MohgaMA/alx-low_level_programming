#include "main.h"
#include <stdio.h>
/*
 * main - the main function
 * Returns: 0
 */
int main (void)
{
	int i = 0;
	char c[8] = "_putchar";

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	return(0);
}
