#ifndef HOLBERTON
#define HOLBERTON

/* Standard Libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

typedef struct t_type
{
	char *type;
	void (*print)(va_list);
} f_types;

/* Prototypes */

int _putchar(char c);
int _printf(const char *format, ...);

#endif /* HOLBERTON */
