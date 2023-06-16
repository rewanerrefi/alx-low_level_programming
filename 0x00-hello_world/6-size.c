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
	printf("Size of char pointer: %u  byte(s)\n", sizeof(char));
	printf("\nSize of int pointer: %u  byte(s)\n", sizeof(int));
	printf("\nSize of float pointer: %u byte(s)\n", sizeof(float));
	printf("\nSize of long int pointer: %u byte(s)\n", sizeof(long int));
	printf("\nSize of long long int pointer: %u byte(s)\n", sizeof(long long int));
	return (0);
}

