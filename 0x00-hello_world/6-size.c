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
	printf("Size of a char: %c byte(s)", sizeof(c));
	printf("Size of an int: %i byte(s)", sizeof(i));
	printf("Size of a long int: %li byte(s)", sizeof(li));
	printf("Size of a long long int: %lld byte(s)", sizeof(lli));
	printf("Size of a float: %f byte(s)", sizeof(f));
	return (0);
	}
