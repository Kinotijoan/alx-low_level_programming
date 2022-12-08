#include <stdio.h>
/**
 * main - Entry point
 * Description: print size of
 * printf(prints a string or character)
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %li byte(s)", sizeof(char));
	printf("Size of an int: %li byte(s)", sizeof(int));
	printf("Size of a long int: %li byte(s)", sizeof(long int));
	printf("Size of a long long int: %li byte(s)", sizeof(long long int));
	printf("Size of a float: %li byte(s)", sizeof(float));
	return (0);
}
