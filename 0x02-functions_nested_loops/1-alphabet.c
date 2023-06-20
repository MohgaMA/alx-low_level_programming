#include <stdio.h>
/**
 * print_alphabet - the main block of code
 * Return: 0
 * DEscription: function print lowercase alphabet
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;

	}
	putchar('\n');
}
