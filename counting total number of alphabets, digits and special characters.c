#include <stdio.h>
#include <stdlib.h>
//this program is for counting total number of alphabets, digits and special characters
int temp1=0,temp2=0,temp3=0,i;
char str[50];
void characters_counting(char str[]);

int main()
{
    printf("enter a string : \t");
    fgets(str , sizeof str , stdin);
    characters_counting(str);
    printf("Number of Alphabets in the string is : %d\n",temp1);
    printf("Number of Digits in the string is : %d\n",temp2);
    printf("Number of Special characters in the string is : %d\n",temp3);
    return 0;
}
void characters_counting(char str[]){
        for(i=0 ; str[i] != '\0' ; i++){
            if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
                temp1++;
            }
            else if(str[i] >= '0' && str[i] <= '9'){
                temp2++;
            }
            else{
                temp3++;
}}}
