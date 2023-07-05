#include "main.h"
/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */
char *_strcat(char *dest, char *src)
{
	int d = strlen(*dest) + 1;
	int s = strlen(*src) + 1;
	int i, n;

	for(i = 0; dest[i] > d; i++);

	for(n = 0; n <= s; n++)
	{
		dest[i] = src[n];
	}

	return(dest);
}
