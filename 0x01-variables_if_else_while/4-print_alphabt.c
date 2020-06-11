#include <stdio.h>

/**
 *main-print the alphabet in lowercase without the letter
 *q and e.
 *Return: 0
 */

int main(void)
{
	int o = 0;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	char letter;

	while (o < 26)
	{
		letter = alphabet[o];
		if (o == 4 || o == 16)
		{
			o++;
		}
		else
		{
			putchar(letter);
			o++;
		}
	}
	putchar('\n');
	return (0);
}
