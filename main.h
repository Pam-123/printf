#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct print_format - Structure for format specifiers and their functions
 * @spec: The format specifier
 * @printer: Pointer to the corresponding printing function
 */
typedef struct print_format
{
	char spec;
	int (*printer)(va_list args);
} print_format_t;

int op_putchar(char c);
int _printf(const char *format, ...);
int (*converter(char spec))(va_list args);

int char_print(va_list args);
int string_print(va_list args);
int integer_print(va_list args);
int octal_print(va_list args);
int hex_print(va_list args);
int percent_print(va_list args);

#endif /* MAIN_H */
