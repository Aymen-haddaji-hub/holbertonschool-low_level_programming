#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 *@s: string
 *@c: char we search
 * Return: c if char available null if does not exist.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
