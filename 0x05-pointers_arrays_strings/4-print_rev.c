#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to print
*/

void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);
	for (len; len != 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
