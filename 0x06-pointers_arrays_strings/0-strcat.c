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
	int i;
	int n = 0;

	for (i = 0; dest[i] != '\0'; i++);

	while (src[n] != '\0')
	{
		dest[i + n] = src[n];
		n++;
	}

	return(dest);
}
