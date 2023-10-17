#include <unistd.h>

/**
 * op_putchar - tis prints chararter
 * @c: variable
 * Return: 0
 */
int op_putchar(char c)
{
	return (write(1, &c, 1));
}
