#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Array size:");
    scanf("%d",&n);
    int *arr = calloc(n,sizeof(int));
    if(arr==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);

    }
    printf("The array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",*(arr+i));

    }
    printf("\n");printf("Removing first element %d\n", arr[0]);
    for( int i=0;i<n;i++)
        arr[i-1]=arr[i];
    arr=realloc(arr, (n-1)*sizeof(int));

    printf("MOdified array\n");
    for(int i=0;i<n;i++)
        printf("%d",arr[i]);
    printf("\n");

    free(arr);
    return 0;
}