#include <stdio.h>
#include <stdlib.h>
float square_root(float n){
    float sqrt,temp;
    printf("enter a number : ");
    scanf("%f",&n);
    sqrt = n/2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( n/temp + temp) / 2;
    }
    return sqrt;
}
int main()
{
    float n;
    printf("The square root of given number '%.2f'", square_root(n));
    return 0;
}
