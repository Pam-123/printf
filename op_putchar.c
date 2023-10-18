#include "main.h"

/**
 * op_putchar - prints a char
 * @c: variable
 *
 * Return: 0
 */
int op_putchar(char c)
{
	return (write(1, &c, 1));
}
