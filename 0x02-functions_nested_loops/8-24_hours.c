#include "main.h"
/**
 * jack_bauer - print all minits of a day
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hour = 00;

	while (hour <= 23)
	{
		int mine = 00;

		while (mine <= 58)
		{
			_putchar((hour):(mine));
			mine++
		}
		_putchar((hour):(mine));
		hour++;
	}
}
