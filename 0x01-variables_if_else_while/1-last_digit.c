#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - it will assign a random number to the variable n
 * Return: 0.
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, a);
	if else(a == 5)
		printf("Last digit of %i is %i and is 0\n", n, a);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, a);
	return (0);
}

