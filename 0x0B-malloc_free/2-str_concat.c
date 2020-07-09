#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string src
 * @s2: string src 2
 * Return: pointer to the concatenated string if fail return null
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	char *b;
	int i, j, z;

	b = "";
	if (s1 == NULL)
		s1 = b;
	if (s2 == NULL)
		s2 = b;
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
	j++;
	p = malloc((i + j) * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (z = 0; s1[z] != '\0'; z++)
		p[z] = s1[z];
	j = 0;
	while (s2[j] != '\0')
	{
		p[z] = s2[j];
		j++;
		z++;
	}
	p[z] = '\0';
	return (p);
}
