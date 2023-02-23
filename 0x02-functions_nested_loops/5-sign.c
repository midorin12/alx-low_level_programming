#include "main.h"
/**
*print_sign - entry point
*@n: number
*Return: 1 if sign is + or 0 if value is 0 or -1 if sign is -
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
