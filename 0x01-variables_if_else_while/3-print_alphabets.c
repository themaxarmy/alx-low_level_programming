#include <stdio.h>

/*
 * main - entry point
 * 
 * results: always 0 (success)
 */

int main(void)
{
	char x;
	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar(\n);

	return (0);
}
