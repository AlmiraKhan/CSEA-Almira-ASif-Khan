#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char *ptr;
    ptr = (char*)malloc(10);
    strcpy(ptr, "Programming");
    printf("%s, Address = %u\n",ptr,ptr);

    ptr = (char*)realloc(ptr,20);//ptr is allocated with new size
    strcat(ptr, "In C");
    printf("%s, Address = %u\n",ptr,ptr);
}