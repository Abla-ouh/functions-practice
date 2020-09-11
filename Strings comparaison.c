#include <stdio.h>
#include <stdlib.h>
int i,test;
void compare_strings(char str1[],char str2[]);
int main()
{
    char str1[50],str2[50];
    printf("enter your first string : \t");
    fgets(str1 , sizeof str1 , stdin);
    printf("enter your second string : \t");
    fgets(str2 , sizeof str2 , stdin);
    compare_strings(str1,str2);
    return 0;
}

void compare_strings(char str1[],char str2[]){
    for(i=0 ; str1[i] == str2[i] ; i++){
              if(str1[i] == '\0' || str2[i] == '\0')
            test = 0;}

     if(str1[i-1] == '\0' && str2[i-1]=='\0')
            test = 1;

    if(test == 1)
             printf("the given strings are equal !!");
     if(test == 0)
             printf("the given strings are not equal !!");
}
