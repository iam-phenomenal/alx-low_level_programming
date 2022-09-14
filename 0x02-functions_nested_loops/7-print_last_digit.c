#include "main.h"

/**
 * print_last_digit- Entry
 * @n: Input number
 * Description: Compute last digit by modulus
 * Return: Last digit(m)
*/
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
	{
		m = m * -1;
	}
	_putchar(m + '0');
	return (m);
}
