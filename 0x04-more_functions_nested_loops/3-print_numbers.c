#include "main.h"

/**
 * print_numbers-Entry
 * Description: Print numbers from 0 to 9
 * Return: Void
*/
void print_numbers(void)
{
	char a = '0';

	for (a; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
