#include <stdio.h>
#include <stdlib.h>
//Write a program in C to find maximum occurring character in a string.
char str[50];
int i,j,temp=0;
char repeatedChar;
int max=0;
void character_rep(char str[]);

int main()
{
    printf("enter a string : \t");
    fgets(str,sizeof str,stdin);
    character_rep(str);
    return 0;
}
void character_rep(char str[]){
    for(i=0;i<strlen(str);i++){
            temp =0;
        for(j=0;j<strlen(str);j++){
            if(str[i]==str[j]){
                temp++;
            }
        }
            if(max<temp){
                max = temp;
                repeatedChar = str[i];
            }
    }
    printf("\n-------------------------------------------------------------------\n");
    printf("the maximum occurring character in this string is : %c \n and it shows %d times",repeatedChar,max);
    printf("\n-------------------------------------------------------------------\n");

}
