#include "main.h"

/**
 * swap_int- Entry
 * @a: First swap value
 * @b: Second swap value
 * Description: Swap the the value of a and b
 * Return:
*/

void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
