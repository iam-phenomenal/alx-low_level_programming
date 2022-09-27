#include "main.h"
#include <stdio.h>

/**
 * _memset- Entry
 * @s: String to be manipulated
 * @b: Character to be filled with
 * @n: Number of bytes to be filled with starting from ptr
 * Description: Filling empty memomy
 * Return: Char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
