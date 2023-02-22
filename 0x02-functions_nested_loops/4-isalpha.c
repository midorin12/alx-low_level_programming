#include "main.h"
/**
*_isalpha - entry point
*@c: character
*Return: 0 if non-alphabitic or 1 if alphabitic
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
