#include <unistd.h>

/**
 * printstr_ingg - Prints a string to the standard output
 * @s: The string to be printed
 *
 * Return: Number of characters printed (excluding null byte)
 */
int printstr_ingg(const char *s)
{
	int compute = 0;

	while (*s != '\0')
	{
		compute += write(1, s, 1);
		s++;
	}
	return (compute);
}
