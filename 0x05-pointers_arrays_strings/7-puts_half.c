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

	while (str[len] != '\0')
	{
		len++;
	}

	int n;
	n = (len - 1) / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
