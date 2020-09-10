#include <stdio.h>
#include <stdlib.h>
char str[100];
int i=0;
void separate(char str[]);
int main()
{
    printf("enter a string : \t");
   fgets(str, sizeof str, stdin);
    separate(str);
    return 0;
}
void separate(char str[]){
        printf("the given string's characters are : \n");
        while(str[i] != '\0'){
            printf("%c ",str[i]);
            i++;
        }
        printf("\n");
}
