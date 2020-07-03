#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet functions 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char az = 'a';
	int count = 1;

	while (count < 11)
	{
		while (az <= 'z')
		{
			_putchar(az);
			az++;
		}
		_putchar('\n');
		az = 'a';
		count++;
	}
}
