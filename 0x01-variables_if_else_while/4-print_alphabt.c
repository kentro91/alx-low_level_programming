#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
char ken;

for (ken = 'a'; ken <= 'z'; ken++)
{
if (ken != 'q' && ken != 'e')
putchar(ken);
}
putchar('\n');
return (0);
}
