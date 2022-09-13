#include "main.h"

/**
 * _islower- Entry
 * Description: Checking for lowercase character
 * @c: Input Character
 * Return: 1(True) 0(False)
*/

int _islower(int c)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (c == letter)
		{
			return (1);
		}
		letter++;
	}
	return (0);
}
