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
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
