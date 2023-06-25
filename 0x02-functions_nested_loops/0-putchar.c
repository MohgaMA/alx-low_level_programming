#include "main.h"
#include <stdio.h>
/*
 * main - the main function
 * Returns: 0
 */
int main (void)
{
	int i = 0;
	char c[i] = "_putchar";

	while (i < 8)
	{
		putchar(c[i]);
		i++;
	}
	return(0);
}
