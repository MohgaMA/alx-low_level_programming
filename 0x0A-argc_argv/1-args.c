#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(__attribute__((unused)) int argc,
			__attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
