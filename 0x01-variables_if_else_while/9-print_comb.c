#include <stdio.h>

/**
 * main- Entry
 * Description: print primary numbers seperated by comma
 * Return: 0(Success)
*/
int main(void)
{
	int start = '0';

	while (start <= '9')
	{
		putchar(start);

		if (start != '9')
		{
			putchar(',');
			putchar(' ');
		}
		start++;
	}
	putchar('\n');

	return (0);
}
