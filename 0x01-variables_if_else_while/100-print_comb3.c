#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers with base 10
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (!(j <= i))
			{
				putchar(i);
				putchar(j);
				if (!(i == '8' && j == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
