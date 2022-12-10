#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers with base 10
 * Return: always 0 (success)
 */
int main(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{

			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
