#include <stdio.h>
#include <stdlib.h>
int maxTab(int T[],int N){
    int i;
    int max=T[0];
    for(i=0;i<N;i++){
        if(T[i]>max){
                max = T[i];
        }
    }
return max;
}
int main()
{
    int N,i;
    printf("Array's size :\t");
    scanf("%d",&N);
    int T[N];

    for(i=0;i<N;i++){
        printf("T[%d] = \t",i+1);
        scanf("%d",&T[i]);}

    printf("array's maximum number is : %d\t", maxTab(T,N));
    return 0;
}
