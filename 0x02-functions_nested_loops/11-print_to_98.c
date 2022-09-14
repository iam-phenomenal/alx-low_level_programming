#include "main.h"

/**
 * print_to_98- Entry
 * @n: Integer starting point
 * Description: Prints number from @n to 98
 * Return: void
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n);
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			n--;
		}
	}
	return;
