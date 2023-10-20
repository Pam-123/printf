#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * binaryStr - Binary string
 * intToBinary - converts integer to binary
 * customPrint - prinst custom value
 * Description - 'printf' function'
 *
 * Return: binary string
 */

int main(void)
{
     unsigned int value = 42;
     customPrint("binary representation: %b\n", value);
     return (0);
}
char *intToBinary(unsigned int value)
{
     int  bits = sizeof(value) * 8;
     char * binaryStr = (char*)malloc(bits + 1);
     
     if (binaryStr == NULL)
     {
	     return NULL;
     }

     for (int i = bits - 1; i >= 0; i--)
     {
	     binaryStr[bits - 1 - i] = ((value >> i) & 1) ? '1' : '0';
     }
     binaryStr[bits] = '\0';
     return binaryStr;
}
void customPrint(const char* format, ...)
{
	va_list args;
	va_start(args, format);
	
	while (*format)
	{
		if (*format == '%')
		{

			format++;

			if (*format == 'b')
			{

				unsigned int value = va_arg(args, unsigned int);
				char* binaryRepresentation = intToBinary(value);
				
				if (binaryRepresentation != NULL)
				{
					for (char* c = binaryRepresentation; *c; c++)
					{
						putchar(*c);
					}
					free(binaryRepresentation);
				}
				else
				{
					printf("Memory allocation error.\n");
				}
			}
			else
			{
				putchar(*format);
            }
        } else {
            putchar(*format);
	}
		format++;
	}
	
	va_end(args);
}

