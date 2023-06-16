#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program that prints the size of various types.
 *
 * Return: 0 (success)
 */

int main(void)
{
	printf("Size of char: %u 1 byte(s)\n", sizeof(char));
	printf("Size of int: %u 4 byte(s)\n", sizeof(int));
	printf("Size of long int: %u 8 byte(s)\n", sizeof(long int));
	printf("Size of long long int: %u 8 byte(s)\n", sizeof(long long int));
	printf("Size of float: %u 4 byte(s)\n", sizeof(float));
	return (0);
}

