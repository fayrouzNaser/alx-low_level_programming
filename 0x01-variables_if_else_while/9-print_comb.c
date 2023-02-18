#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single number of base 10
 * starting from 0, fillowed by a new line
 * Return: 0
 */
int main(void)
{
	int s = 0;
	int e = 9;

	while (s <= e)
	{
		putchar(s + '0');

		if (s != e)
		{
			putchar(',');
			putchar(' ');
		}
		s++;
	}
	putchar('\n');
	return (0);
}
