#include "main.h"

/**
 * puts2- Entry
 * @str: strings to be printed out
 * Decription: Print strings shifting by 2
 * Return: void
*/
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index = index + 2;
	}
	_putchar('\n');
}
