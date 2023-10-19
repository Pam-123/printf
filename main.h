#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct arg
{
	char *my;
	int (*b)();
} arguments;

int format_str(const char *format, arguments func_list[], va_list list);
int decimal_print(va_list final_args);
int char_print(va_list args);
int rev_print(va_list final_args);
int percent_print(void);
int _strlen(char *str);
int _strlenop(const char *str);
int string_print(va_list args);
int _printf(const char *format, ...);
int op_putchar(char c);

#endif
