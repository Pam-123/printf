#include <unistd.h>

/**
 * op_putchar - super printing function
 * @p: variable
 *
 * Return: 0
 */
int op_putchar(char p)
{
	return (write(1, &p, 1));
}
