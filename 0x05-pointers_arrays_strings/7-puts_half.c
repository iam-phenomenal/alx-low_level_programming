#include "main.h"

/**
 * puts_half- Entry
 * @str: string to be manipulated
 * Description: Prints half of string
 * Return: void
*/
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	len++;
	n = len / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
