#include "main.h"

/**
 * _strlen- Entry
 * @s: String to be counter
 * Description: Counts the number of characters in a string
 * Return: Length of string
*/

int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}
