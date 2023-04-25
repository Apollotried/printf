#include "main.h"

/**
 * print_b - Prints the binary representation of an unsigned integer
 * @args: The va_list containing the integer to print
 *
 * Return: The number of characters printed
 */
int print_b(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	char binary[32];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		binary[i++] = (n & 1) + '0';
		n >>= 1;
	}

	count = i;
	while (--i >= 0)
		_putchar(binary[i]);

	return (count);
}

