#include "main.h"

/**
 * main - Entry point
 *
 * void: no arguments
 *
 * Return: 0
 */

int main(void)
{
	char rotimi[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(rotimi[c]);
	}
	_putchar('\n');
	return (0);
}
