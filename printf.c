#:include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int count = 0;

	va_start(args, format);
	char _c = (char)va_arg(args, int);/** print a character for the %c specifier */


	if (format == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; format[i]) != '\0'; i++)
		{
			if (format[i] != '%')
			{
				putchar(format[i]);
				count++;
			}
			else
			{
				if (format[i + 1] == 'c')
				{
					i++
					putchar(_c);
					count = count + 1;
				}

			}


		}
	}
	va_end(args);
	return (count);
}
