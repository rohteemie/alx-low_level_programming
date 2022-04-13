#include "main.h"

/**
 * print_alphabet_x10 - this function print all the alphabet a to z 10 times
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');
	}
}
