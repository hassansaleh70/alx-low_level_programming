#include <stdio.h>
/**
 * Write a function that prints a string, followed by a new line.
 *
 */
void _puts_recursion(char *);

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
int main(void)
{
	int f;

	f = factorial(5);
	printf("5! = %d\n", f);
		return (0);
}
