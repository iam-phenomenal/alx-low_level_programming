#include "main.h"

/**
 * print_alphabet_x10- Entry
 * Description: Printing lowercase alphabet 10 times
 * Return: 0(Success)
*/

void print_alphabet_x10(void)
{
	int count = 0;

	while (count <= 9)
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		count++;
	}
}
