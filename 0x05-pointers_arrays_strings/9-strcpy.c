#include "main.h"

/**
 * _strcpy- Entry
 * @dest: destination pointer
 * @src: source pointer
 * Description: Copy string from source to destination
 * Return: destination pointer
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
