#include "main.h"

/**
 * _abs- Entry point
 * Description: Returns the absolute value of an integer
 * @n: Input integer
 * Return: absolute value of n
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
