#include <stdarg.h>
#include <stdio.h>

/**
 * custom_printf - Printf function that is used to print
 * @format: This is a string
 * @... : more arguments can be added
 *
 * Return: Numbers of Chars Printed
 */
void custom_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%' && *(format + 1) != '\0') {
            format++;
            switch (*format) {
                case 'd':
                    printf("%d", va_arg(args, int));
                    break;
                case 's':
                    printf("%s", va_arg(args, char *));
                    break;
                case 'c':
                    printf("%c", va_arg(args, int));
                    break;
                default:
                    own_putchar('%');
                    own_putchar(*format);
            }
        }
	else
	{
            own_putchar(*format);
        }
        format++;
    }

    va_end(args);
}

int main() {
    int num = 42;
    char str[] = "Hello, World!";
    char ch = 'A';

    custom_printf("Integer: %d, String: %s, Character: %c\n", num, str, ch);

    return 0;
}
