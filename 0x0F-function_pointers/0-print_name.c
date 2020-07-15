#include <stdio.h>

/**
 * print_name - prints the name given.
 * @name: input name.
 * @f: function that print input;
 * Return: no return 
 */

void print_name(char *name, void (*f)(char *))
{
	void (*pfn)(char *);

	pfn = f;
	pfn(name);
}
