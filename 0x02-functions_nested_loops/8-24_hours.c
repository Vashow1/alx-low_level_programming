#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * return: void
 */
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			if (hours < 10)
			{
				_putchar('0');
			}
			_putchar(hours + ':');
			if (minutes < 10)
			{
				_putchar('0');
			}
			_putchar(minutes + '\n');
		}
	}
	_putchar('\n');
}
