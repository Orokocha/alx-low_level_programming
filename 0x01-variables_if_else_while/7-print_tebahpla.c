#include <stdio.h>
/**
 * main - Print number from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	for (ch = 'z' ; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
