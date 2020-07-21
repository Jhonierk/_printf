#ifndef HOLBERTON
#define HOLBERTON
#define BUFFER_SIZE 1024

/* Standard Libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct t_types - Struct format
 *
 * @type: Arguments
 * @print: The function associated
 *
 * Description: Define a new type struct t_types
 */

typedef struct t_types
{
	char *type;
	int (*print)();
} f_types;

/* Prototypes */

int _putchar(char c*, int len_buffer);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(char *percent, char *buff);

#endif /* HOLBERTON */
