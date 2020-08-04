#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float racine(float n){
        float result;
        printf("donner un nombre : \n");
        scanf("%f",&n);
        result = pow(n,0.5);
        return result;
}

int main()
{
    float n;
    printf("la racine de ce nombre est : %f",racine(n));
    return 0;
}
