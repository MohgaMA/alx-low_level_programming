#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to print
*/

void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (len != 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
		i++;
	return (i);
}
