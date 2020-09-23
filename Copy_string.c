#include <stdio.h>
#include <stdlib.h>
// Write a program in C to copy one string to another string.
char str1[50],str2[50];
int i,temp=0;
void copy_string(char str[]);

int main()
{
    printf("enter your first string : \t");
    fgets(str1 , sizeof str1 , stdin);
    copy_string(str1);
    printf("- The First string is : %s\n",str1);
    printf("- The Second copied string is : %s\n",str2);
    printf("- Number of characters copied : %d\n",temp-1);
    return 0;
}
void copy_string(char str1[]){
    for(i=0;str1[i]!='\0';i++){
        str2[i] = str1[i];
        temp++;
    }
}
