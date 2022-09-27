#include "main.h"

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

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
