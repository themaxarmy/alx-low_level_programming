#include "main.h"
/**
* _isalpha - check if input is an alphabet
*
* @c: Using characters in ASCII code
*
* Return: 1 for letters. Returns 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
