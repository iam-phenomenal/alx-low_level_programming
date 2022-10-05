#include "main.h"

/**
 * print_most_numbers- Entry
 * Description: Print numbers expect from 2 and 4
 * Return: Void
*/

void print_most_numbers(void)
{
	char i = '0';

	for (i; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
