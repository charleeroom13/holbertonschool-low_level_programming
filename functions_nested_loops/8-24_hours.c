#include "main.h"

/**
 * jack_bauer - Prints every minute of the day, from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hour = 0; /* outer counter */
	int minute; /* inner counter */

	while (hour < 24)
	{
		minute = 0; /* resets mins to 0 for every hr */

		while (minute < 60) /* inner loop, runs mins 0 to 59 for each hr */
		{
			_putchar('0' + hour / 10); /* drops last digit, so 17/10 is 1 */
			_putchar('0' + hour % 10); /* keeps last digit, so 17%10 is 7 */
			_putchar(':'); /* colon between hrs and mins */
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n'); /* each minute gets its own line */

			minute++;
		}

		hour++;
	}
}
