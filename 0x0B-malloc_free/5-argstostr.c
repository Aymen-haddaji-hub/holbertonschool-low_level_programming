#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *argstostr - concatenates all the arguements of your program
 *@ac: arguement count
 *@av: argument values
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	char *c, *start;
	int i, j, count;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			count++;
		}
		count++;
	}
	count++;
	c = malloc(count * sizeof(char));
	if (c == NULL)
		return (NULL);
	start = c;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*c = av[i][j];
			j++;
			c++;
		}
		*c = '\n';
		c++;
	}
	return (start);
}
