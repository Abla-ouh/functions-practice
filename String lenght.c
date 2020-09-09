#include <stdio.h>
#include <stdlib.h>
int i;
char string[50];
int string_lenght(char string[]);

int main()
{
    printf("Length of the string is : %d\n\n",string_lenght(string));

    return 0;
}

int string_lenght(char string[]){
                printf("enter a string : \t");
                fgets(string, sizeof string, stdin);
                i=0;
                while(string[i]!= '\0'){ i++; }
  return i+1;
}
