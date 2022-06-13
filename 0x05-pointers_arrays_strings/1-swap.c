#include "main.h"
/**
 * swap_int - Swaps two integers
 * @*a: Place holder int 1
 * @*b: Place holder int 2
 * Return: 1
 */
void swap_int(int *a, int* b)
{
int *i = b;
*a = *b;
*b = *i;
}
