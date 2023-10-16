#include <stdio.h>
/**
 * add - function adds two number
 * @a: parameter
 * @b: parameter
 * Return: the result
 */
int add(int a, int b)
{
	int result = a + b;

	return (result);
}
/**
 * sub - function sub two number
 * @a: parameter
 * @b: parameter
 * Return: the result
 */
int sub(int a, int b)
{
	int result = a - b;

	return (result);
}
/**
 * mul - function multiblicate two numbers
 * @a: is a parameter
 * @b: is a prameter
 * Return: the result of the them
 */
int mul(int a, int b)
{
	int result = a + b;

	return (result);
}
/**
 * div - function that division two numbers
 * @a: is a parameter
 * @b: is a prameter
 * Return: the result of the them
 */
int div(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error : division by zero\n");
		return (0);
	}
	result = a / b;

	return (result);
}
/**
 * mod - function modulas two numbers
 * @a : is a parameter
 * @b : is a prameter
 * Return: the result of the them
 */
int mod(int a, int b)
{

	int result;

	if (b == 0)
	{
		printf("Error : division by zero\n");
		return (0);
	}
	result = a % b;

	return (result);
}

