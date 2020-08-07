#include <stdio.h>
#include <stdlib.h>
void parity(int n){
        printf("enter a number : ");scanf("%d",&n);

        if( n%2 != 0){
            printf("the given number is odd !");
        }
        else if(n%2 == 0){
            printf("the given number is even ! ");
        }
}
int main()
{
    int n;
    parity(n);
    return 0;
}
