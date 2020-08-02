#include <stdio.h>
#include <stdlib.h>
int somme(int a,int b){
       printf("donner deux nombres :");
       scanf("%d %d",&a,&b);
    return a+b;
}
int main()
{
    int a;
    int b;
    printf("la somme est : %d",somme(a,b));
    return 0;
}
