#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c) /* takes one character, c, and returns an int */
{
	return (write(1, &c, 1));

	/* write is delivery driver
	 * three arguments are delivery slip
	 * Address: 1, file descriptor 1 is screen (standard output)
	 * Package: &c, where the letter sits (& means "address of")
	 * Weight: 1, a single character (one byte).
}
