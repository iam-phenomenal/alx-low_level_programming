#include <stdio.h>

/**
 * main- Entry
 * Description: Prints all alphabets except q and e
 * Return: 0(Success)
*/
int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters != 'q' && letters != 'e')
		{
			putchar(letters);
		}
		letters++;
	}
	putchar('\n');

	return (0);
}
