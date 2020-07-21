#include "holberton.h"
/**
 * _printf - produces output according to a format.
 * @format: pointer to character string.
 *
 * Return: number of character printed excluding null byte.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int (*fmtout)();
	int count = 0, len_count = 0;

	if ((!format) || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	va_start(list, format);
	
	while(format[count] && format){

		if (format[count] == '%')
		{
			if (format[count + 1] != '%')
			{
				fmtout = get_format(format[count + 1]);

				if (fmtout)
				{
					len_count += fmtout(list), count++;
				}
				else
				{
					write(1, &format[count], 1), len_count++;
				}
			}
			else
			{
				write(1, &format[count], 1), len_count++, count++;
			}
		}
		else
		{
			write(1, &format[count], 1), len_count++;
		}
	    posit_fmt++
	}
	va_end(list);
	return (len_count);
}
