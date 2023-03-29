#include<stdio.h>
#include<string.h>

void main()
{
    char arr[10],rev_arr[10];
    int i,j,len=strlen(arr);
    printf("Enter the string");
    scanf("%s",arr);
    rev_arr[len]='\0';
    for(i=0,j=len-1;i<len,j>=0;i++,j--)
    {
        rev_arr[j]=arr[i];
    }

    printf("Reverse string: %s",rev_arr);



}