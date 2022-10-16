#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{

int num;
char Al;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (Al = 'a'; Al <= 'f'; Al++)
putchar(Al);
putchar('\n');
return (0);
}
