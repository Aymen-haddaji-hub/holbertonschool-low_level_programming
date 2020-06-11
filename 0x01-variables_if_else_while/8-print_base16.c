#include <stdio.h>
/**
 *main-prints all hex numbers
 *Return: 0
 */

int main(void)
{
	int y;
	char numbers[16] = "0123456789abcdef";
	char letter;

	y = 0;
	while (y < 16)
	{
		letter = numbers[y];
		putchar(letter);
		y++;
	}
	putchar('\n');
	return (0);
}
