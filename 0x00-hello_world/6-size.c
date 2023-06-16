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
	printf("Size of char pointer: %d\n", sizeof(char));
	printf("\nSize of int pointer: %d\n", sizeof(int));
	printf("\nSize of float pointer: %d\n", sizeof(float));
	printf("\nSize of long int pointer: %d\n", sizeof(long int));
	printf("\nSize of double pointer: %d\n", sizeof(double));
	return (0);
}

