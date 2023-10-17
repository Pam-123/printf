#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int char_print(va_list final_args);
int string_print(va_list final_args);
int percent_print(va_list final_args);
int decimal_print(va_list final_args);
int _printf(const char *format, ...);
int op_putchar(char p);
int integer_print(va_list _final_args);

#endif /* MAIN_H */
