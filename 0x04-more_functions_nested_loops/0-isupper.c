#include "main.h"

/**
 * _isupper- Entry
 * @c: character to check
 * Description: Determine if character is in uppercase or not
 * Return: 0(False) 1(True)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
