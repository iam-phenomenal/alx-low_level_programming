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

	n = (len - 1) / 2;

	while (str[n+1] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
