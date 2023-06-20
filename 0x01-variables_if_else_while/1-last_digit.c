#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - the main block of code
 * Return: 0
 * If: the first condition
 * Else if: second condition
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("The string Last digit of %d and is greater than 5\n", n);
	if (n == 0)
		printf("The string Last digit of %d and is 0\n", n);
	if (n < 6 && n != 0)
		printf("The string Last digit of %d and is less than 6 and not 0\n", n);
	return (0);
}
