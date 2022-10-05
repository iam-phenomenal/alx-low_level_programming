#include "main.h"
#include <stdio.h>

/**
 * print_numbers-Entry
 * Description: Print numbers from 0 to 9
 * Return: Void
*/
void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
