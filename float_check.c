#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char number[10];
    int flag = 0;
    int length;
    int i = 0;

    printf("\nEnter a number: ");
    scanf("%s", number);
    length = strlen(number);

    while(number[i++] != '\0')
    {
        if(number[i] == '.')
        {
            flag = 1;
            break;
        }}
    if(flag)
        printf("valid");
    else
        printf("invalid");

    return 0;
}
