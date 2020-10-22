#include <stdio.h>
#include <stdlib.h>

void sorting_string(char str[]);
int j,i,l;
char str[100],temp;

int main()
{
    printf("enter a string :");
    fgets(str,sizeof str,stdin);
    sorting_string(str);
    return 0;
}
void sorting_string(char str[]){
        for(i=1;i<strlen(str);i++)
            for(j=0;j<strlen(str)-i;j++)
                    if(str[j] > str[j+1]){
                    temp = str[j];
                    str[j] = str[j+1];
                    str[j+1] = temp;
                    }
    printf("your string in accending order :\n");
    printf("%s\n\n",str);
}
