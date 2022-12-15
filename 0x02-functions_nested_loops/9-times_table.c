#include "main.h"

/**
* times_table - prints 9 time table.
*
* Return: Always 0.
*/
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			_putchar(48 + c);
		}
		_putchar('\n');
	}
}
