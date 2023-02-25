#include "main.h"
/**
*_isdigit - check if the value is digit
*@c: character
*Return: 1 if is a digit or 0 if is not
*/
int _isdigit(int c)
{
if (c >= 0 && c < 10)
return (1);
else
return (0);
}
