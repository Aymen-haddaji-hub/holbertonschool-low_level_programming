#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *string_nconcat -function that concatenates two strings.
 * @s1: string number 1.
 * @s2: string number 2.
 * @n: unsignet integer variable.
 * Return: pointer to new allocated memory or Null if fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c, *d;
	unsigned int i, j;

	d = "";
	if (s1 == NULL)
		s1 = d;
	if (s2 == NULL)
		s2 = d;
	for (i = 0; s1[i] != '\0'; i++)
		;
	c = malloc((i + (n * sizeof(*s2) + 1) * sizeof(*c)));
	if (c == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
		c[i] = s2[j];
	c[i] = '\0';
	return (c);
}
