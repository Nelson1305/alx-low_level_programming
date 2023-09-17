#include <stdio.h>


/**
 * main - program that prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)

	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}

	putchar('\n');

	return (0);
}
