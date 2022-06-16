#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * return: void
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			if (hour < 10)
			{
				_putchar('0');
			}
			_putchar(hour);
			_putchar(':');
			if (minute < 10)
			{
				_putchar('0');
			}
			_putchar(minute);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
