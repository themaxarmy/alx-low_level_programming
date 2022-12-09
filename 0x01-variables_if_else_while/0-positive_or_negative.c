#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * return - always 0 is success
 *   */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n%2 == 0)
	{
		printf("%d is possitive", n);
	}
	else if (n%2 ==1) 
	{
		printf("%d is negetive", n);
	}
	else {
		printf("%d is 0", n);
	}
	return (0);
}
