#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int stringValid(char str[])
{
    int len=strlen(str);
    int s=0,h=0,i=0;
    while(len>0)
    {
        if(str[i]=='*')
            s++;
        else 
            h++;

        len--;
        i++;
        
    }
    return (s-h);

}
void main()
{

    char str[25];
    printf("Enter the string\n");
    scanf("%s",str);

    if(stringValid(str)==0)
        printf("String is valid");

    else
        printf("String is not valid");

}