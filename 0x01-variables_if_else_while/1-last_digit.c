#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 * Description: prints the last digit of the number stored in variable
 * use printf
 * use if control statement
 *Return: always 0 (sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int l = n % 10;

	if (l > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", l);
	}
	else if (l == 0)
	{
		printf("Last digit of n is %d and is 0\n", l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", l);
	}

	return (0);
}
