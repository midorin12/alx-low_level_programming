#include <string.h>
#include "main.h"
/**
*print_rev - reverse the string
*@s: string
*/
void print_rev(char *s)
{
int len = strlen(str);

while (len >= 0)
{
putchar(str[len]);
len--;
}
putchar('\n');
}
