#include <stdlib>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of s2 to be added to s1
 * 
 *
 * Return: pointer to allocated memory or exit with 98 
 * */

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	char *ptr;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	ptr = malloc(sizeof(char) * (x + n + 1));
	x = 0;
	y = 0;
	if (ptr = NULL)
		return (NULL)
	while (s1[x] != '\0')
	{
		ptr[x] = s1[x];
		x++;
	}
	while (y < n && s2[y] != '\0')
	{
		ptr[x] = s2[y];
		x++, y++;
	}
	ptr[x] = '\0';
	return (ptr);
}
