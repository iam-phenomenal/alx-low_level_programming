#include "main.h"

/**
 * print_line- Entry
 * @n: Number of iterations
 * Description: Print a line base on the length of n
 * Return: void
*/
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
