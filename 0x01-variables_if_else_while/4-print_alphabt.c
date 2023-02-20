#include <stdio.h>
/**
*main- entry point
*Return: 0 (Success)
*/
int main(void)
{
char c = 'a';

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
putchar(c);
}
putchar('\n');
return (0);
}
