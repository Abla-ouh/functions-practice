#include <stdio.h>
#include <stdlib.h>

char str[50];
int string_lenght(char string[]);

int main()
{
    printf("enter a string : \t");
    scanf("%s",str);
    printf("Length of the string is : %d\n\n",string_lenght(str));
    return 0;
}

int string_lenght(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    return (i);
}
