#include "<main.h>"

/**
 * print_alphabet - Entrypoint
 * Description: prints the alphabet in lower case followed by
 * a new line
 * Return: void
 */

void print_alphabet(void)
{
	int ch = 'a';

	for (ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar(\n);

}
