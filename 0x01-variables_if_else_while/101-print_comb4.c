#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all combination of three digits
 * Return: A;ways 0
 */
int main(void)
{
	int a;
	int b;
	int c = 0;

	while (c < 10)
	{
		b = 0;
		while (d < 10)
		{
			a = 0;
			while (a < 10)
			{
				if (a != b && b != c && c < b && b < a)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (c != 7 || b != 8 || a != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				a++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}