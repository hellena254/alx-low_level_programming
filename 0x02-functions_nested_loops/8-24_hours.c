#include "main.h"

/**
 *jack_bauer()- prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59
 *
 *Description: this function does not return
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			/* print hours*/
			putchar('0' + hours / 10);
			putchar('0' + hours % 10);

			putchar(':');

			/* print minutes */
			putchar('0' + minutes / 10);
			putchar('0' + minutes % 10);

			putchar('\n');
		}
	}
}
