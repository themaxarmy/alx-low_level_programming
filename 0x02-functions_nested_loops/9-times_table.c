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
			if (c <= 9)
			{
			_putchar(48 + c);
			_putchar(44);
			_putchar(32);
			_putchar(32);
			}
			else
			{
			_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
			_putchar(44);
			_putchar(32);
			}

		}
		_putchar(10);
	}
}
