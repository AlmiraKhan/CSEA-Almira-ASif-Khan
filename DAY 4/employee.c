// create a structure for three employees- empid,name,phne no and salary, input values ,access it and print it
// structure paddding ???
#include<stdio.h>
#include<stdlib.h>
struct emp
{
    int id;
    char name[30];
    int no;
    float sal;
};

void main()
{
    struct emp a[3];
    int i;
    printf("\nEnter details of employees\n");
    for(i=0;i<3;i++)
    {
        printf("\nEnter id of employee %d : ",i+1);
        scanf("%d",&a[i].id);
        printf("\nEnter name of employee %d : ",i+1);
        getchar();
        gets(a[i].name);
        printf("\nEnter phone number of employee %d : ",i+1);
        scanf("%d",&a[i].no);
        printf("\nEnter salary of employee %d : ",i+1);
        scanf("%f",&a[i].sal);
    }
    printf("\n\nDetails of Employees\n");
    for(i=0;i<3;i++)
    {
        printf("\n\nId of employee %d : %d",i+1,a[i].id);
        printf("\nName of employee %d : %d",i+1,a[i].name);
        printf("\nPhone number of employee %d : %d",i+1,a[i].no);
        printf("\nSalary of employee %d : %f",i+1,a[i].sal);
    }
}