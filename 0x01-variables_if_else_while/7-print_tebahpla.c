#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the alphapets in lowercase in reverse
 * use putchar
 * Return: always 0 (success)
 */
int main(void)
{
	int ch = 'z';

	for (; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
