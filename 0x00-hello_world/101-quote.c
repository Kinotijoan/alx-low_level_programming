#include <stdio.h>

/**
 * main - Entry point
 * Description: prints certain words
 * Return: (1)
 */
int main(void)
{
	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(txt, 59, 1, stderr);
	return (1);
}
