#include <stdio.h>
#include "main.h"
/**
* _abs - prints the absolute value of a number
*@m: number targeted
*Return: returns 0
*/
int _abs(int m)
{
	if (m < 0)
	{
		m = m * -1;
		return (m);
	}
	else
		return (m);
}
