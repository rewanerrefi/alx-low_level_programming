#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */

void main(void)
{
	 char ch;
	 int in;
	 long int li;
	 long long int lli;
	 float f;
	printf("Size of a char: %ld byte(s)\n", sizeof(ch));
	printf("Size of an int: %ld byte(s)\n", sizeof(in));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
