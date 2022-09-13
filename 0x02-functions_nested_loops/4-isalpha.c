#include "main.h"

/**
 * _isalpha- Entry
 * Description: Check if character exists in Alphabets
 * @c: Input Character
 * Return: 1(True) 0(False)
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
