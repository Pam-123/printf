#include <unistd.h>

/**
 * printch_ar - Prints a single character to the standard output
 * @c: The character to be printed
 *
 * Return: 1 on success, -1 on error
 */
int printch_ar(int c)
{
	char ch = (char)c;
	return (write(1, &ch, 1));
}
