#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - returns a pointer that contains a string
 * that is a combination of two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the concatenated string
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
