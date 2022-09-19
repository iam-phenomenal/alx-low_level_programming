#include "main.h"

/**
 * rev_string- Entry
 * @s: String to be printed
 * Description: Print string in reverse
 * Return: void
*/
void rev_string(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		_putchar(s[length]);
		length++;
	}
	_putchar('\n');

	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}

}
