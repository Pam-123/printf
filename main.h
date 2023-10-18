#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int char_print(va_list args);
int percent_print(void);
int _strlen(char *str);
int _strlenop(const char *str);
int string_print(va_list args);
int _printf(const char *format, ...);
int op_putchar(char c);

#endif
