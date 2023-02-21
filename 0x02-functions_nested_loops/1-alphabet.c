#include <stdio.h>
/**
*main - entry point
*Return: 0 (Success)
*/
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
/**
*print_alphabet - entry point
*Return: void (Success)
*/
void print_alphabet(void)
{
char c = 'a';

for (c = 'a'; c <= 'z'; c++)
putchar(c);
}
