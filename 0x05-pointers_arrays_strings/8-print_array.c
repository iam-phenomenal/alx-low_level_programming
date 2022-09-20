#include "main.h"
#include <stdio.h>

/**
 * print_array- Entry
 * @a: array pointer
 * @n: number of arrays to be printed
 * Description: prints specified number of array
 * Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	n--;

	while (n >= 0)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
		n--;
		i++;
	}
	printf("\n");
}
