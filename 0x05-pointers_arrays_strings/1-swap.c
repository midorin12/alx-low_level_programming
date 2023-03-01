#include "main.h"
/**
*swap_int - swap the two integers
*@a: number 1
*@b: number 2
*/
void swap_int(int *a, int *b)
{
int r;

r = *a + *b;
*a = r - *a;
*b = r - *b;
}
