#include  "main.h"
/**
*print_alphabet - entry point
*Return: 0 (Success)
*/
void print_alphabet(void)
{
char c = 'a';

for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
