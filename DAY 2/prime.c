#include <stdio.h>
#include<stdlib.h>
void main()
{
    int arr[10], sum = 0;
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    for (int i = 2; i <= (sum / 2); i++)
    {
        if (sum % i == 0)
        {

            printf("%d is not prime", sum);
            exit(0);
        }
    }
    printf("%d is prime", sum);
}