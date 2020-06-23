#include "holberton.h"

/**
 * print_rev- prints a string in reverse
 * @s: string to reverse
 * Return: nonel
 */

void print_rev(char *s)
{
	int j;
	char c;

	for (j = 0; s[j] != 0; j++)
	{
	}
	for (j = j - 1; j >= 0; j--)
	{
		c = s[j];
		_putchar(c);
	}
	_putchar('\n');
}
