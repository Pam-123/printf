#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

int rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int op;

	if (s == NULL)
	{
		s = ")llun(";
	while (s[counter] != '\0')
	counter++;
	for (op = 0; op < counter; op++)
	{
		counter--;
		rev = s[op];
		s[op] = s[counter];
		s[counter] = rev;
	}
	return (op);
}
