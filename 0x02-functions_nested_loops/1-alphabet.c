#include "main.h"
#include <stdio.h>
/**
*print_alphabet - Prints alphabets to standard output
*Description: Prints alphabets to std output
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
