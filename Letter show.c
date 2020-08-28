#include <stdio.h>
#include <stdlib.h>
int show(char string[],char letter){
    int Nbr = 0,i;
    printf("- enter a string : \n");
    scanf("%s",&string);
    printf("- enter a letter : \n");
    scanf("%s",&letter);

    for(i=0 ; string[i] != '\0' ;i++){
        if(string[i] == letter)
            Nbr++;
    }
    return Nbr;
}

int main()
{
    char string;
    char letter;
    printf("this letter shows %d times !! ",show(string,letter));
    return 0;
}
