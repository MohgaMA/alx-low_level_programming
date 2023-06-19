#include <stdio.h>
/**
 * main - Block of code
 * Return: 1
 */
int main(void)
{
    FILE *output_file;

    output_file = fopen("file.txt", "w");
    fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", output_file);
    fclose(output_file);
    return 1;
}
