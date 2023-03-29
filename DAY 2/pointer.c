#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a=20,b=30;
    int *p1=&a, *p2=&b;
    int temp;

    printf("\nBefore swapping\na=%d,b=%d",a,b);
    
    //swapping
    // temp=*p1;
    // *p1=*p2;
    // *p2=temp;

    *p1= *p1+ *p2;
    *p2= *p1- *p2;
    *p1= *p1- *p2;


    printf("\nAfter swapping\na=%d,b=%d",a,b);

    printf("\nSum:%d",*p1+*p2);
}