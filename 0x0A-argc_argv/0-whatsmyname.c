#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */
int mynameis(int argc, char *argv[])
{
	printf("myname is %s\n", argv[argc - 1]);
	return (0);
}
