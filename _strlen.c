#include "main.h"

/**
 * _strlen - finds length of string
 * @str: string
 * Return: b
 */
int _strlen(char *str)
{
	int b;

	for (b = 0; str[b] != 0; b++)
		;
	return (b);
}
/**
 * _strlenop - modified strlen
 * @str: string
 * Return: b
 */
int _strlenop(const char *str)
{
	int b;

	for (b = 0; str[b] != 0; b++)
		;
	return (b);
}
