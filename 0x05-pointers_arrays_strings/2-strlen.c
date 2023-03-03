#include "main.h"
/**
*_strlen - calculating the len of a string
*@s: string
*Return: len value of string
*/
int _strlen(char *s)
{
int i = 0;
while (s[i])
i++;
return (i);
}
