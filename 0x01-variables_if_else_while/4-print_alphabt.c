#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the alphapets in lowercase
 * use putchar
 * Return: always 0 (success)
 */
int main(void)
{
	int ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
