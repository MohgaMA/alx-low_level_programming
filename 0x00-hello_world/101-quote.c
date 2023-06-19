#include <stdio.h>
/**
 * main - Block of code
 * Return: 1
 */
int main(void)
{
	FILE *printf ;
	printf = fopen("file.text", "w");
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19", printf);
	fclose(printf);
	return (1);
}
