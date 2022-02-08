#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insertatbeg();
void insertatend();
void deleteatbeg();
void deleteatend();
void display();
void main()
{
        int choice=0;
        while(choice!=6)
        {
            printf("\n\n\nChoose option\n");
            printf("1.insertion at begining\n2.insertion at end\n3.delete at begining\n4.delete at end\n5.display\n6.EXIT\n");
            printf("Enter choice:");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                    insertatbeg();
                    break;
                case 2:
                    insertatend();
                    break;
                case 3:
                    deleteatbeg();
                    break;
                case 4:
                    deleteatend();
                    break;
                case 5:
                    display();
                    break;
                case 6:
                    exit(0);
                    break;

            }
        }
}

    void insertatbeg()
    {
        struct node *ptr;
        int value;
        ptr=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value:");
        scanf("%d",&value);
        ptr->data=value;
        ptr->next=head;
        head=ptr;
    }
    void insertatend()
    {
        int value;
        struct node *ptr,*temp;
        ptr=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value");
        scanf("%d",&value);
        ptr->data=value;
        ptr->next=NULL;
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;
    }
    void deleteatbeg()
    {
        struct node *ptr;
        ptr=head;
        head=ptr->next;

    }
    void deleteatend()
    {

    }

    void display()
    {
        struct node *ptr;
        ptr = head;
            if(ptr == NULL)
                {
                    printf("Nothing to print");
                }
            else
                {
                    printf("\nPrinting values:  ");
                    while (ptr!=NULL)
                        {
                            printf("\n%d",ptr->data);
                            ptr = ptr -> next;
                        }
                }
    }
