#include "main.h"
/**
  *swap_int - A function that swaps two integers
  *@a: integer to be swapped
  *@b: integer to be swapped
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
