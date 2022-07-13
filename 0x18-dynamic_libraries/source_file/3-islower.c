#include "main.h"

/**
 * _islower - return 1 if lower case alphabet and 0 if otherwise
 *
 * @c : takes in character.
 *
 * Return: 0 for uppercase for lowecase
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
