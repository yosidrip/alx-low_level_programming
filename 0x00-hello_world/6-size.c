#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by bwave ict
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(a));
	printf("Size of a int: %i byte(s)\n", sizeof(b));
	printf("Size of a long int: %i byte(s)\n", sizeof(c));
	printf("Size of a long long int: %i byte(s)\n", sizeof(d));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}
