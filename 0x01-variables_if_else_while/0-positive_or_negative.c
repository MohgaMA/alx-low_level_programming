#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

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
		printf("%d is positive\n", n);
	else if (n == 0)
		pprintf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
