#include "main.h"

/**
 * print diagnal - func draws a diagnal line on the terminal
 * @n: no of times the character \ should be printed
 */
void print _diagnal (int n)
{

	if (n <= 0)
	{
		_putchar('\n'):
	} else 
	{
		int i,j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
		{
			if (j == i)
			_putchar('\\');
			else  if (j < i)
			_putchar(' ');
		}

		_putchar('\n');
		}
		}
}
