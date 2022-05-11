#include <stdio.h>
/**
 * main - Entry point to print all combination
 * of two digit with comma, and space followed by new line
 *
 * Return: Always (0) successfull
 */
int main(void)
{
	int numb1, numb2;

	for (numb1 = '0'; numb1 <= '8'; numb1++)
	{
		for (numb2 = '1'; numb2 <= '9'; numb2++)
		{
			if (numb1 != numb2 && numb1 < numb2)
			{
				putchar(numb1);
				putchar(numb2);

				if (numb1 != '8' || numb2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
