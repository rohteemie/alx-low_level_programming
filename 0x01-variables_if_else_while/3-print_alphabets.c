#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Succesfull
 */
int main(void)
{
	char i = 'a', j = 'A';

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; ++j)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
