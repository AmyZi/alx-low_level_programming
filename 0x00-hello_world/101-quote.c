#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point
 *Description: standard error
 * Return: Return 1 (standard error)
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

