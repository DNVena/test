#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints char
 * @format: takes pointer
 * Return: integer
 */
int _printf(const char *format, ...)
{
	int i = 0;

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(list, int));
					break;
				case 's':
					printf("%s", va_arg(list, char *));
					break;
					default:
						i++;
						continue;
			}
			i++;
		}
	}
	printf("\n");
	printf("%d\n", i);
	va_end(list);
	return (0);
}
