#include <stdio.h>

/**
 * main- Entry
 * Description: Print alphabets in reverse
 * Return: 0(Success)
*/
int main(void)
{
	char start_letter = 'z';

	while (start_letter >= 'a')
	{
		putchar(start_letter);
		start_letter--;
	}
	putchar('\n');

	return (0);
}
