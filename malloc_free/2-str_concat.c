#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into newly allocated memory
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, or NULL if malloc fails
 * GitHub for notes!!!
 */
char *str_concat(char *s1, char *s2)
{
	char *out;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	out = malloc((len1 + len2 + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		out[i] = s1[i];
		i++;
	}

	i = 0;
	while (i <= len2)
	{
		out[len1 + i] = s2[i];
		i++;
	}

	return (out);
}
