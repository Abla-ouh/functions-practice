#include <stdio.h>
#include <stdlib.h>
char str[50];
int i;
void reverse_string(char str[]);
int main()
{
   printf("enter a string : \t");
   fgets(str, sizeof str, stdin);
    reverse_string(str);
    return 0;
}

void reverse_string(char str[]){
        printf("the given string's reversed characters are : \n");
        for(i=strlen(str)-1 ; str[i] != '\0';i--){
                        printf("%c ",str[i]);
        }
        printf("\n");
}
