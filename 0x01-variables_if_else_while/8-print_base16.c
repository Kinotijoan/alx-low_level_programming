#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers with base 16
 * Return: always 0 (success)
 */
int main(void)
{
	
	int ch = 'a';
	int i = '0';

	for (; i <= '9'; i++)
	{
		putchar(i);
	}

	for (; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
