#include "main.h"
#include <stdio>
/**
*_abs - entry point
*@n: number
*Return: 0 and abs value of the number n
*/
int _abs(int n)
{
int a;

if (n < 0)
{
a = n * -1;
printf("%d", a);
}
return (0);
}

