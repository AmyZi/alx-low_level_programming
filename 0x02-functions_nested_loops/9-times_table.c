#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
*times_table - Prints the 9 times table
*Return: Void
*/
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar(result + '0');
			}
			if (result < 10 && j != 0)
				{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(result + '0');
				}
				else if (result >= 10)
				{
					_putchar(',');
					_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				}
			}
		_putchar('\n');
}
}
