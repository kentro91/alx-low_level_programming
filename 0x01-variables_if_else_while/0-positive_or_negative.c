#include <stdio.h>
#include <stdlih.h>
#include <time.h>
/**
* assign a random positive and negative number to a variable n
* Return: Always 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
}
printf("%d is a positive number\n", n);
}
else if (n == 0)
{
printf("%d it is zero\n", n);
}
else
{
printf("%d it is a negative number\n", n);
}
return (0);
}
