#include <unistd.h>

/**
 * _putchar - Custom putchar
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
