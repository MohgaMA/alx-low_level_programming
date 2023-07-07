#include "main.h"

/**
* factorial - searchs for the factorial of a number
* @n: the number to find the factorial of
*
* Return: the factorial of the number
*/
int factorial(int n)
{
	if (n > 0)
	{
		n = n*(factorial(n - 1));
		return (n);
	}
	else 
		return (-1);
}
