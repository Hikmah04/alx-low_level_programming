#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples fo three prints Fizz instead of the number
 * and for the multipjles of five print Buzz
 * Return: Always 0 (Success)
 */

int main(void)

{

	int k;

	for (k = 1; k <= 100; k++)
	{
		if ((k % 3 == 0) && (k % 5==0))
		{
			printf("FizzBuzz");
		}
		else if (k % 3 == 0)
		{
			printf("Fizz");
		}
		else if (k % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", k);
		}
		if (k != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
				}
