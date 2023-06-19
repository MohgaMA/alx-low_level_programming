#include <stdio.h>
/**
 * main - Block of code
 * Return: 1
 */
int main(void)
{
	FILE *file;

	file = fopen("file.txt", "w");
	fputs("and that piece of art is useful\" - Dora Korpar
	, 2015-10-19\n", file);
	fclose(file);
	return (1);
}
