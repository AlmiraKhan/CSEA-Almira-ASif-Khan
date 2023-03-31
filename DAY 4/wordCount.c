#include<stdio.h>
#include<string.h>

void main()
{
    int count=0;
    char str[20];
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    printf("\n%s",str);
    int len=strlen(str);
    int i=0;
    while(i<len)
    {
        if(str[i]==' ')
            count++;
        if (i==len-1 && i!=0)
            count++;
        i++;
    }
    printf("Count: %d",count);
}
