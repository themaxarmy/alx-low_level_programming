#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("%d is 0", n);
	else if (n%2 ==1)
		printf("%d is negetive", n);
	else
		printf("%d is positive", n);
	return (0);
}
