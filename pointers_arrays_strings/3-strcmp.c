#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference of the first differing characters, or 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0; /* position we're comparing in both strings */

	/**
	 * keeps moving forward while s1 hasn't ended and both letters match
	 */

	while (s1[i] != '\0' && s1[i] == s2[i])

		i++;

	/**
	 * subtracts two letters (their ASCII numbers)
	 * (this matches sample)
	 * 'H' (72) minus 'W' (87) gives -15
	 * if both are \0, it gives 0
	 * if one string is a prefix of other,
	 * shorter one's \0 makes result negative or positive
	 */

	return (s1[i] - s2[i]);
}
