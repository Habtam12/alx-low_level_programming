#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h;
	int m;
	int h_r;
	int h_l;
	int m_r;
	int m_l;

	h_r = 0;
	h_l = 0;
	m_r = 0;
	m_l = 0;

	for (h = 0; h < 24; h++)
	{
		h_l = h / 10;
		h_r = h % 10;
		for (m = 0; m < 60; m++)
		{
			m_l = m / 10;
			m_r = m % 10;
			_putchar(h_l + '0');
			_putchar(h_r + '0');
			_putchar(':');
			_putchar(m_l + '0');
			_putchar(m_r + '0');
			_putchar('\n');
		}
	}
}
