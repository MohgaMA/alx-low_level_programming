#include "main.h"
/**
*_isdigit - function that verifies if a  character is a number or not
*@c: tested character
*Return: returns 1 if it is , 0 if not
*/

int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return (1);
        else
                return (0);
}
