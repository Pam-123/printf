#include <unistd.h>

/**
 * own_putchar - custom putchar function
 *
 * Return: 0
 */
int own_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
