#include "main.h"

/**
 * _puts- Entry
 * @str: String to be counted
 * Description: Prints string and then new line
 * Return: Void
*/
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
