#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/


int main(void)
{
char ken;
char obi;
for (ken = 'a'; ken <= 'z'; ken++)
{
putchar(ken);
}
for (obi = 'A'; obi <= 'Z'; obi++)
{
putchar(obi);
}
putchar('\n');
return (0);
}
