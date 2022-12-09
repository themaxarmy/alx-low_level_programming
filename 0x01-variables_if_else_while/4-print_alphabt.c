#include <stdio.h>
/**
 * main - print alphabet in lower and uppercase except q and e
 *
 *
 * Return: (0) Success
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if ((x == 'e') || (x == 'q'))
			continue;
		else
			putchar(x);
	}
	putchar('\n');

	return (0);
}
