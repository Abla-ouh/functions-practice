#include <stdio.h>
#include <stdlib.h>
float notes(float a,float b,float c){
    printf("donnez la note de chaque semestre pour avoir la note general : \n");
    scanf("%f %f %f",&a,&b,&c);
    return (a+b+c)/3;
}

// First : you have to know how many modules are 
// 2nd   : Use a loop for this task
/* ========= My version : =============

float notes(void)
{
    int nb_mod;
    float sum_notes = 0;
    printf("Enter number of modules you have : "); scanf("%d",&nb_mod);
    for(int i = 0; i < nb_mod; i++)
    {
       fload note;
       printf("Enter note %d : ",i+1); scanf("%f",&notes);
       sum_notes += note;
    }
    return (sum_notes / nb_mod);
}
*/

int main()
{
    float a,b,c;
    printf("la note general : %.2f",notes(a,b,c));
    return 0;
}
