#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry
 * Description: Prints alphabets in lowercase and then new line
 * Return: 0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
