#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int print_sign(int n)

{
	if (n > 0)
        {
        putchar('+');
        return (1);
        }
        else if (n == 0)
        {
        _putchar(48);
        return (0);
        }
        else if (n < 0)
	{
	_putchar('_');
	}
	return (-1);
}
