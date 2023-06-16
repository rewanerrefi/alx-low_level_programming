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
	printf("Size of char: %u  byte(s)\n", sizeof(char));
	printf("\nSize of int: %u  byte(s)\n", sizeof(int));
	printf("\nSize of long int: %u byte(s)\n", sizeof(long int));
	printf("Size of long long int: %u byte(s)\n", sizeof(long long int));
	printf("\nSize of float: %u byte(s)\n", sizeof(float));
	return (0);
}

