#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program that prints the size of various types.
 *
 *
 * Return: 0 (success)
 */

int main(void)
{
	 int integerType;
	 float floatType;
	 double doubleType;
	 char charType;
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
	return (0);
}

