#include <stdio.h>

/**
 * main- Entry
 * Description: Print all hexa digits
 * Return: 0(Success)
*/
int main(void)
{
	char numbers = '0';
	char alphas = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (alphas <= 'f')
	{
		putchar(alphas);
		alphas++;
	}
	putchar('\n');

	return (0);
}
