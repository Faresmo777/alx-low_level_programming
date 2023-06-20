#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet in lowercase 10 times
 *
 * Description: This function uses the _putchar function to print the alphabet
 * in lowercase 10 times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
