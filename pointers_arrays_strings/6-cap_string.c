#include "main.h"

/**
 * is_separator - checks if a character separates words
 * @c: character to check
 *
 * Return: 1 if c is a separator, 0 otherwise
 * Notes are pushed on GitHub later so Betty is happy
 */

static int is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == ',' ||
		c == ';' || c == '.' || c == '!' || c == '?' ||
		c == '"' || c == '(' || c == ')' || c == '{' ||
		c == '}');
}

/**
 * cap_string - capitalizes all words of a string
 * @str: string to change
 *
 * Return: pointer to str
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' &&
			(i == 0 || is_separator(str[i - 1])))
			str[i] = str[i] - 'a' + 'A';
		i++;
	}

	return (str);
}
