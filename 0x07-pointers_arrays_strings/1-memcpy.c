#include "holberton.h"
/**
*_memcpy - Fills the first n bytes of the memory area
* pointed to by @i with the constant byte @j.
* @dest: A pointer to the memory area to be filled.
* @src: The character to fill the memory area with.
* @n: The number of bytes to be filled.
*
* Return: A pointer to the filled memory area @dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (i < n)
	{
		dest[j] = src[i];
		if (src[i] == '\0')
		{
			dest[j] = '\0';
			break;
		}
		j++;
		i++;
	}
	while (j < n)
		dest[j++] = '\0';
	return (dest);
}
