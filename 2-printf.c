#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _prt - prints int
 * @n: takes int
 * Return: void
 */
void _prt(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		_prt(n / 10);
	}
	_putchar(n % 10 + '0');
}

int _printbin(const char *format, ...)
{
	unsigned int i;
	int j;

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			for (j = 1 << 31; j > 0; j = j / 2)
			{
				((va_arg(list, int)) & j) ? _putchar('1') : _putchar('0');
			}
			i++;
		}
	}
	_putchar('\n');
	va_end(list);
	return (0);
}
