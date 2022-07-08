#include <stdio.h>
#include <math.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */



int main(void)
{
	long a, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			maxf = number / a;
		}
	}

	printf("%ld\n", maxf);

	return (0);
}
