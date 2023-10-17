#include <stdio.h>
#include "main.h"

/**
 * main - Entry of Program
 * 
 * Return: 0
 */
int printNumbers(int positiveNumber, int negativeNumber)
{
	positiveNumber = 42;
	negativeNumber = -762534;

	printNumbers(positiveNumber, negativeNumber);

	return (0);
}
