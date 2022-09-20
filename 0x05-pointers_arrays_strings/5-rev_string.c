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
	int half;
	char tmp_holder;

	while (s[length] != '\0')
	{
		length++;
	}
	half = length / 2;

	while (half--)
	{
		tmp_holder = s[length - rev_index - 1];
		s[length - rev_index - 1] = s[rev_index];
		s[rev_index] = tmp_holder;
		rev_index++;
	}
}
