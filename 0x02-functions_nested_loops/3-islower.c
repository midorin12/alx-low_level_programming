#include "main.h"
/**
*_islower - entry point
*@c: charcter
*Return: 1 if lower or 0 if upper
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
