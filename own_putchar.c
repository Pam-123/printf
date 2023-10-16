#include <unistd.h>

/**
 * own_putchar - custom putchar function
 *
 * Return: nothing
 */
int own_putchar(char c)
{
	return (write(1 ,&c ,1));
}
