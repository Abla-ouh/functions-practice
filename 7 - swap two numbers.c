/******************************************************************************
                                    ***
                         *** Functions practice ***
                                   *****
    author   : Abla-Ouh
    Exercice : Write a program in C to swap two numbers using function

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
void swap(int a , int b)
{
        int aux;
        printf("enter a = "); scanf("%d",&a);
        printf("enter b = "); scanf("%d",&b);
        //======= Method 1 : Using a temp variable (aux) ==============
        aux = a;
        a = b;
        b = aux;
        //=============================================================
        
        /*
        //======= Method 2 : without a temp variable ========
            a = a - b;   
            b = a + b;
            a = b - a;
        //==================================================*/
        printf("a = %d\nb = %d",a,b);
}

int main()
{
    int a ,b;
    swap(a,b);
    return 0;
}
