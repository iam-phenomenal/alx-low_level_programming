#include "main.h"

/**
 * print_rev- Entry
 * @s: String to be printed
 * Description: Print string in reverse
 * Return: void
*/
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}

	_putchar('\n');
}
