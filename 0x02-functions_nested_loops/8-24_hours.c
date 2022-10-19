#include "main.h"
/**
 * jack_bauer - prints every mins of the day of Jack Bauer,
 * from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	hour = 0;
	while (hour <= 23)
	{
		minute = 0;
		while (minute <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}
