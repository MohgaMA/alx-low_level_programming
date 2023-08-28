#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int __attribute__((__unused__)) argc, char __attribute__((__unused__)) *argv[])
{
	printf("myname is %s\n", argv[argc - 1]);
	return (0);
}
