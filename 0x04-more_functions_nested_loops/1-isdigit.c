#include "main.h"

/**
 * _isdigit- Entry
 * @c: parameter to check
 * Description: Check if character is a digit using the ascii table
 * Return: 0(False) 1(True)
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
