#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *numbers = (int*) malloc(4*sizeof(int));
    int i;
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;

    printf("\nStored integers are");
    for(i=0;i<4;i++)
    {
        printf("\nnumbers[%d]=%d",i,numbers[i]);
        
    }


}
