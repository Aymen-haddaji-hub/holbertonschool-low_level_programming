#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
	int alphabet;

	for (alphabet = 'a' ; alphabet = 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
