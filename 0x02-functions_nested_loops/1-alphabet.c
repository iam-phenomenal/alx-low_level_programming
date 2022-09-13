#include "main.h"

/**
 * print_alphabet- Entry
 * Description: Print lowercase alphabets
 * Return: 0(Success)
*/
void print_alphabet(void)
{
	char start = 'a';

	for (start; start <= 'z'; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
