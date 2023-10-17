#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>


int own_putchar(char c);
int printNumbers(int positiveNumber, int negativeNumber);
int rev_string(char *s);
int _printf(const char *format, ...);
int (*converter(char op))(va_list);
int string_print(va_list your_op_args);
int char_print(va_list your_op_args);
int _strlen(char *op_strings);
int _strlenop(const char *op_strings);
int percent_print(va_list your_op_args);

#endif
