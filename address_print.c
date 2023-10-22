#include "main.h"

/**
 * address_print - function that prints the address of a given variable
 * @final_args: the argument in the va_list
 * Return: the length of the address
 */
int address_print(va_list final_args)
{
	unsigned int inscription[16];
	unsigned int b = 0, amount = 0;
	int compute = 0;
	unsigned long n;
	unsigned long m = 1152921504606846976;
	char *line = "(nil)";

	n = va_arg(final_args, unsigned long);

	if (n == 0)
	{
		for (b = 0; line[b]; b++)
		{
			op_putchar(line[b]);
			compute++;
		}
		return (compute);
	}

	op_putchar('0');
	op_putchar('x');
	compute = 2;
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

