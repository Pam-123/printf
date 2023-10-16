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
int _printf(const char *format, ...);
int _strlen(char *compute_string);
int printch_ar(va_list _my__args);
int printstr_ingg(va_list _my__args);
int printper_cent(void);

#endif
