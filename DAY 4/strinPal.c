#include<stdio.h>
#include<string.h>

void main()
{
    char str[20];
    printf("Enter the string\n");
    scanf("%s",str);
    int len=strlen(str)-1,flag=0;
    for(int i=0,j=len;i!=j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("String is not a plaindrome");
    else
        printf("String is a plaindrome");

}