#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that make somthing
 * Return: 0 (Success)
 */
int main(void)
{

	       int n;
	       int m;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		m = n % 10;
		if (m > 5)
			printf("last digit of %d and %d is greater than 5\n", n, m);
		else if (m == 0)
			printf("last digit of %d and %d is 0\n", n, m);
		else
			printf("last digit of %d and %d is less than 6 and not 0\n", n, m);
		return (0);
}
