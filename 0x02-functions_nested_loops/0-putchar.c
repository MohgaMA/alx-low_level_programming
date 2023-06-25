#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	int i = 0;
	char c[8] = "_putchar";

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
