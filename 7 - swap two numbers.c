#include <stdio.h>
#include <stdlib.h>
void swap(int a , int b){
        int aux;
        printf("enter a = ");
        scanf("%d",&a);
        printf("enter b = ");
        scanf("%d",&b);
        aux = a;
        a = b;
        b = aux;
        printf("a = %d\nb = %d",a,b);
}

int main()
{
    int a ,b;
    swap(a,b);
    return 0;
}
