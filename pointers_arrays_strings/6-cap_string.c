#include "main.h"

/**
 * is_separator - checks if a character separates words
 * @c: character to check
 *
 * Return: 1 if c is a separator, 0 otherwise
 * Notes are pushed to GitHub later so Betty is happy
 */

/**
 * small helper that answers  "is this character a word gap?"
 * 13 separators make one long condition. A helper keeps cap_string readable
 * static: means function is private to this file, so needs no line in main.h
 */

static int is_separator(char c)
{
	/**
	 * gives 1 (true) if c matches any separator, otherwise 0
	 * || means "or" so one match is enough
	 * '\t' is tab, '\n' is new line, and '"' is a double quote inside single quotes
	 */

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
		/**
		 * three checks must all pass:
		 * character is a lowercase letter
		 * and it starts a word
		 */

		if (str[i] >= 'a' && str[i] <= 'z' &&
			
			/**
			 * word starts at position 0, or right after a separator
			 * i == 0 is checked first. When it's true, || stops there
			 * so we never read str[-1] (before string)
			 */

			(i == 0 || is_separator(str[i - 1])))
			
			str[i] = str[i] - 'a' + 'A';
		
		i++;
	}

	return (str); /* str never moved, so still points to start */
}
