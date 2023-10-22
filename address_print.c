#include "main.h"

/**
 * address_print - Print the address of a given variable.
 * @final_args: The argument in the va_list.
 *
 * Return: The length of the address.
 */
int address_print(va_list final_args)
{
	int b;
	unsigned long n = va_arg(final_args, unsigned long);

	if (n == 0)
	{
		char *line = "(nil)";
		int compute = 0;

		for (b = 0; line[b]; b++)
		{
			op_putchar(line[b]);
			compute++;
		}

		return (compute);
	}

	op_putchar('0');
	op_putchar('x');

	return (print_address_digits(n));
}

/**
 * print_address_digits - Print the address digits.
 * @n: The address to print.
 *
 * Return: The length of the printed address.
 */
int print_address_digits(unsigned long n)
{
	unsigned int inscription[16];
	int b = 0, amount = 0;
	int compute = 2;
	unsigned long m = 1152921504606846976;

	inscription[0] = n / m;

	for (b = 1; b < 16; b++)
	{
		m /= 16;
		inscription[b] = (n / m) % 16;
	}

	for (b = 0; b < 16; b++)
	{
		amount += inscription[b];
		if (amount || b == 15)
		{
			if (inscription[b] < 10)
				op_putchar('0' + inscription[b]);
			else
				op_putchar('0' + ('a' - ':') + inscription[b]);
			compute++;
		}
	}

	return (compute);
}

