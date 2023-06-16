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
	printf("Size of char pointer: %lu\n", sizeof(char));
	printf("\nSize of int pointer: %lu\n", sizeof(int));
	printf("\nSize of float pointer: %lu\n", sizeof(float));
	printf("\nSize of long int pointer: %lu\n", sizeof(long int));
	printf("\nSize of double pointer: %lu\n", sizeof(double));
	return (0);
}

