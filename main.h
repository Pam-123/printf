#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

void own_putchar(char c);
int _putchar(char c);
int _printf(const char *format, ...);
void custom_printf(const char *format, ...);
int _strlen(char *compute_string);
int printch_ar(va_list _my__args);  

#endif
