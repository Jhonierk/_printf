#include "holberton.h"

/**
 * print_char - Prints a character.
 * @arg: Arguments.
 *
 * Return: Number of character.
 */
int print_char(va_list arg)
{
	char c;
	
	c = va_arg(arg, int);

	write(1, &c, 1);
	return (1);
}

/**
 * print_string - Prints a string.
 * @arg: Arguments.
 *
 * Return: Number of character.
 */

int print_string(va_list arg)
{
	char *_string;
	int size_string;

	_string = va_arg(arg, char *);

	if (_string == NULL)
		_string = "(null)";

	for (size_string = 0; *_string != '\0'; size_string++)
	{
		write(1, _string, 1);
		_string++;
	}
	return (size_string);
}

/**
 * print_percent - Prints a percent.
 * @percent: Arguments.
 * @buff: Pointer to buffer.
 *
 * Return: Number of character percent.
 */

int print_percent(char *percent, char *buff)
{
	percent++;
	_putchar(buff, '%');
	return (1);
}
