#include <stdio.h>
#include <stdlib.h>
float notes(float a,float b,float c){
    printf("donnez la note de chaque semestre pour avoir la note general : \n");
    scanf("%f %f %f",&a,&b,&c);
    return (a+b+c)/3;
}

int main()
{
    float a,b,c;
    printf("la note general : %.2f",notes(a,b,c));
    return 0;
}
