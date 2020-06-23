#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to use
 * Return: none;
 */

void puts_half(char *str)
{
	int i, j;
	char c;

	for (i = 0; str[i] != 0; i++)
	{
	}
	j = (i + 1) / 2;
	for (; str[j] != 0; j++)
	{
		c = str[j];
		_putchar(c);
	}
	_putchar('\n');
}
