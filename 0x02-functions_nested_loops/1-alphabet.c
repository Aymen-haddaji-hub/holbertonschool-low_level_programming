#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	for (int alphabet = 97 ; int alphabet <= 122 ; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
