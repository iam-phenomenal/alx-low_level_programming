#include <stdio.h>
#include "main.h"
/**
 * print_to_98- Entry
 * @n: Integer starting point
 * Description: Prints number from @n to 98
 * Return: void
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
