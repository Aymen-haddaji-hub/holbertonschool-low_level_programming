#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *  _strdup - duplicate a string.
 *
 * @str: the string to duplicate
 *
 * Return: pointer to copy of string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
