#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* link;
};
struct node* head= NULL;

void display()
{
    struct node *ptr;
    ptr=head;
    if(head==NULL)
        printf("The list is empty\n");
    else
    {
        printf("This is the linked list:");
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
    }
    
    printf("\n");
}

void insertion()
{
    int data;
    struct node* new,*temp;
    new=malloc(sizeof(struct node));

    printf("Enter the data:");
    scanf("%d",&data);

    new->link=NULL;
    new->data=data;
    temp=head;
    
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=new;

    }
    
}

int main()
{
    int n;
    int k;
    

    do{
        printf("Inserting to the linkedlist\n");
        insertion();
        
    
    printf("\nEnter 1 to add more elements:");
    scanf("%d",&k);
    }while(k==1); 

    display();

    }