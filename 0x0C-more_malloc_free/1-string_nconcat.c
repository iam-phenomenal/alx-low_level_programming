#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry
 * Description: Concatenates two strings using at
 *                   most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 *          Otherwise - a pointer to the concatenated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int length1 = 0, length2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
	{
		length1++;
	}

	while (s2[length2] != '\0')
	{
		length2++;
	}

	if (n > length2)
		n = length2;
	s = malloc((length1 + n + 1) * sizeof(char));
	if (s == NULL)
		return (0);

	for (i = 0; i < length1; i++)
	{
		s[i] = s1[i];
	}
	for (; i < (length1 + n); i++)
	{
		s[i] = s2[i - length1];
	}

	s[i] = '\0';

	return (s);
}
