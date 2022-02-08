


#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void search(int);
void exit();
int ch=0,value,temp=0,sh;
struct node
{
    int data;
    struct node *next;
}*head=NULL;

int main()
{
   do
    {
        printf("\n1.Insertion\n 2.deletion\n 3.search\n 4.exit\n");
        printf("Enter  your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the value to insert:");
            scanf("%d",&value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("Enter the element to search:");
            scanf("%d",&sh);
            search(sh);
        break;
        case 4:
            exit(0);
            break;
         default:printf("\n Invalid choice");
        }

    }
    while(ch!=5);
}
void push(value)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=value;
    if(head==NULL)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
    if(head==NULL)
    {
        printf("\n stack is empty");

    }
    else
    {
        struct node *temp=head;
        printf("\n stack elements are");
        while(temp->next!=NULL)
        {

            printf("%d --->",temp->data);
            temp=temp->next;
        }
        printf("%d--->NULL",temp->data);

    }
}
void pop()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("\n stack is empty");
    }
    else
    {
        temp=head;
        if(temp!=NULL && temp->next==NULL)
        {
            temp=temp->next;
            free(temp);
        }
        else
        {
            head=temp->next;
            free(temp);
        }
    }

        if(head==NULL)
    {
        printf("\n stack is empty");

    }
    else
    {
        struct node *temp=head;
        printf("\n stack elements are");
        while(temp->next!=NULL)
        {

            printf("%d --->",temp->data);
            temp=temp->next;
        }
        printf("%d--->NULL",temp->data);

        }
}
void search(sh)
{
    struct node *newnode=malloc(sizeof(struct node));
    int i=0;
    struct node *temp=head;
    while (temp !=NULL)
    {
    if(temp->data==sh)

        printf("%d is found at position %d stack\n",temp->data,i+1);
        temp=temp->next;
        i++;


    }
}
