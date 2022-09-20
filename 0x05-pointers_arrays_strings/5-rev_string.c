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
	int rev_index = 0;
	char tmp_holder = *s

	while (s[length] != '\0')
	{
		length++;
	}
	length--;

	while(length >= 0)
	{
		s[rev_index] = tmp_holder[length];
		rev_index++;
		length--;
	}
}
