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
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
		index++;
	}
	_putchar('\n');
}
