#include <stdio.h>
/**
 * main - Print base 10 numbers
 *
 * Return: Always (0) successfull
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
