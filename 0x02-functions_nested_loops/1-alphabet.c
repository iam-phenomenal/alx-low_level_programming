#include "main.h"

/**
 * print_alphabet- Entry
 * Description: Print lowercase alphabets
 * Return: 0(Success)
*/
void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
