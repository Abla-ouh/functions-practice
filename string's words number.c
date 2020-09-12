#include <stdio.h>
#include <stdlib.h>
int words_number(char str[]);
char str[50];
int i,word;
int main()
{
   printf("enter a string : \t");
   fgets(str, sizeof str, stdin);
   printf("Total number of words in the string is : %d",words_number(str));
    return 0;
}
int words_number(char str[]){

    for(i=0;str[i] != '\0';i++){
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'){
            word++;
        }
    }
    return word;
}
