#include<stdio.h>
#include<stdlib.h>
int a[10],pos,elem;
int n=0;
void create();
void display();
void insert();
void del();
void traversal();
void search();
void main()
{
    int choice;
    while(1)

        {

            printf("\n\nMENU\n");
            printf("1.create an array\n");
            printf("2.display of array elements\n");
            printf("3.insert element at given position\n");
            printf("4.delete element at given position\n");
            printf("5.Traversing elements in array\n");
            printf("6.search elements in array\n");
            printf("7. exit\n\n");
            printf("select your choice:");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:insert();
            break;
            case 4:del();
            break;
            case 5:traversal();
            break;
            case 6:search();
            break;
            case 7:exit(1);
            break;

            }
        }
}
    void create()
    {
        int i;
        printf("enter the number of elements to be entered:");
        scanf("%d",&n);
        printf("enter the elements:");
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
    }
    void display()
    {
        int i;
        printf("Display elements:");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);

        }
    }

    void insert()
    {
        int i;
        printf("enter the position to insert an element:");
        scanf("%d",&pos);
        printf("enter the element to insert:");
        scanf("%d",&elem);
        for(i=n-1;i>=pos;i--)
        {
            a[i+1]=a[i];

        }
        a[pos]=elem;
        n=n+1;
        for(i=0;i<n;i++)
        printf("\nElements are:%3d",a[i]);
    }

    void del()
    {
        int i;
        printf("enter the position to delete element:");
        scanf("%d",&pos);
        elem=a[pos];
        printf("Deleted element:%d\n",elem);
        for(i=pos;i<=n-1;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
        display();
    }

    void traversal()
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("\nTraversing elements are:%3d \n",a[i]);
        }


    }

    void search()
    {
        int i,b,flag=0;
        printf("\n Enter the elements to be searched\n");
        scanf("%d",&b);
        for(i=0;i<=n;i++)
        {
            if(b==a[i])

                flag=i;
        }
        if(flag!=0)
             printf("\nThe element %d is found at position %d\n",b,flag+1);
        else
            printf("not found");
   }
