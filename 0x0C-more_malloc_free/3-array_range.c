#include "main.h"
#include <stdlib.h>

/**
 * array_range- Entry
 * @min: Minimum value of array
 * @max: Maximum value of array
 * Decription: Creates an array of integer from min to max
 * Return: NULL || pointer
*/
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
