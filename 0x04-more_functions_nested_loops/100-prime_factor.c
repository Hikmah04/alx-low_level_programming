#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor of the number 612852475143
 * Return: A;lways 0 (success)
 */

int main(void)

{

	long y, maxf;
	long number  = 612852475143;
	double square = sqrt(number);

	for (y = 1; y <= square; y++)
	{
		if (number % y == 0)
		{
			maxf = number / y;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
