#include "main.h"
#include <stdio.h>
/**
*_abs - entry point
*@n: number
*Return: 0 and abs value of the number n
*/
int _abs(int n)
{
int a;
char str;

if (n < 0)
{
a = n * -1;
str = printf("%d", a);
}
return (str);
}

