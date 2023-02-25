#include "main.h"
/**
*_isupper - check if the alphabetis on uppper case
*@c: character
*Return: 1 if char is upper case or 0 if char is lowercase
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
