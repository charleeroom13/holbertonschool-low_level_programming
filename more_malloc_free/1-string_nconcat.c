#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to use
 *
 * Return: pointer to new string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0') /* get length of s1 */
		len1++;
	while (s2[len2] != '\0') /* get length of s2 */
		len2++;

	if (n >= len2) /* clipping rule */
		n = len2;

	str = malloc(len1 + n + 1); /* s1 + copied part of s2 + end */
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++) /* copies s1 to front */
		str[i] = s1[i];
	for (i = 0; i < n; i++) /* copies s2 to back */
		str[len1 + i] = s2[i];
	str[len1 + n] = '\0';

	return (str);*/
}
