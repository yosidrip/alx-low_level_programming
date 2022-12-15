#include <stdio.h>
/**
 * main - prints the sum of even fibonacci numbers
 * less than 4000000.
 * Return: nothing!
 */
int main(void)
{
	int a = 0, b = 1, n = 0;
	int sum = 0;

	while (n < 4000000)
	{
		n = a + b;
		a = b;
		b = n;
		if (next % 2 == 0)
			sum += n;
	}
	print("%i\n", sum);
	return (0);
}
