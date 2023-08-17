#include "main.h"
/**
*rev_string - Reverse a string
*@s: String to reverse
*Return: Nothing
*/
void rev_string(char *s)
{
	int len, i;
	char *c;
	
	len = _strlen(s);
	while (len != 0)
	{
		i = 0;
		c[i] = s[len - 1];
                len--;
		i++;
        }
	*s = *c;
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
