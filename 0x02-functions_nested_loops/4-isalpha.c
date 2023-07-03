#include <stdio.h>
#include "main.h"
/*
 * _isalpha - controls if a character is alphabetical
 * Return: 1 if it is character
 * and 0 if it is not
 */
int _isalpha(int c)
{
	if (c <= 'z' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
