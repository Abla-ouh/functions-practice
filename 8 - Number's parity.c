#include <stdio.h>
#include <stdlib.h>

void parity(int n)
{
        if(n % 2)
             printf("the given number is odd !");
        else
             printf("the given number is even ! ");
}
int main()
{
    int n;
    printf("enter a number : "); scanf("%d",&n);
    parity(n);
    return 0;
}
