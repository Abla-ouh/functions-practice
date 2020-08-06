#include <stdio.h>
#include <stdlib.h>
int fact(int n); //the function's prototype

int main()
{
    int n;
    printf("Factoriel = %d\n",fact(n));
    return 0;
}
int fact(int n){
        int i,result=1;
        printf("enter a number : \n");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            result=i*result;
        }
        return result;
}
