#include "main.h"
/**
* _print_rev_recursion - function that prints a string in reverse.
*@s: parameter string
*
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(s[*s - 1]);
		_print_rev_recursion(s - 1);
	}
	else 
		_putchar('\n');
}


