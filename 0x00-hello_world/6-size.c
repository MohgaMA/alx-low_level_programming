#include <stdio.h>
/**
 * main - block of code
 * return: 0
 *
 * Description: This program get the size
 * of the variables
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	printf("Size of a char: %lu byte(s)", (long unsigned)sizeof(c));
	printf("Size of an int: %lu byte(s)", (long unsigned)sizeof(i));
	printf("Size of a long int: %lu byte(s)", (long unsigned)sizeof(li));
	printf("Size of a long long int: %lu byte(s)", (long unsigned)sizeof(lli));
	printf("Size of a float: %lu byte(s)", (long unsigned)sizeof(f));
	return (0);
	}
