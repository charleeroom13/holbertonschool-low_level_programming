#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int len; /* length */
	int i; /* left-hand index */
	char tmp; /* spare storage for swapping */

	len = 0;

	while (s[len] != '\0') /* count characters until end marker */
		len++;

	/**
	 * only walk to halfway point
	 * going further would swap everything back and undo the work
	 */

	for (i = 0; i < len / 2; i++) /* for (init; condition; update) */
	{
		/**
		 * swapping
		 * with an odd length the middle one stays where it is
		 */

		tmp = s[i]; /* save the left character */
		s[i] = s[len - 1 - i]; /* copy the right one into the left */
		s[len - 1 - i] = tmp; /* then put the saved one on the right */

		/**
		 * trace for "My School" (len 9):
		 * i < 4, so 4 swaps: positions 0 8, 1 7, 2 6, 3 5
		 * position 4 (space) is the middle and stays put
		 */
	}
}
