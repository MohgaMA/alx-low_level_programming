#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - functinon main block
 * Return: 0
 * If: first condition
 * If else: second condition
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%n is positive", n);
	}
	else if (n == o)
	{
		pprintf("%n is zero", n);
	}
	else
		printf("%n is negative", n);
	return (0);
}
