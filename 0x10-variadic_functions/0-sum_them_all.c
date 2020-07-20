#include "variadic_functions.h"

/**
 * sum_them_all - sum number of all the args passed
 * @n: the number of args
 * Return: the sum result .
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int rslt = 0;
	unsigned int i = 0;

	va_start(valist, n);
	if (n == 0)
		return (0);
	while (i < n)
	{
		rslt += va_arg(valist, int);
		i++;
	}
	va_end(valist);
	return (rslt);
}
