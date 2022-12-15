#include "main.h"

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar(a*b);
		}
		_putchar('\n');
	}
}
