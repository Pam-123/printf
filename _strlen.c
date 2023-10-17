#include "main.h"

/**
 * _strlen - Finds length of a string then returns it
 * @op_strings: pointer string
 * Return: (1)
 */
int _strlen(char *op_strings)
{
	int is;

	for (is = 0; op_strings[is] != 0; is++)
		;
	return (is);
}
/**
 * _strlenop - normal strlen but with constant string pointer
 * @op_strings: string pointers
 * Return: 1
 */
int _strlenop(const char *op_strings)
{
	int is_op;

	for (is_op = 0; op_strings[is_op] != 0; is_op++)
		;
	return (is_op);

}
