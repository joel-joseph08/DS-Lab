#include <stdio.h>
#define max 10

int stack[max],top=-1,ch,n;
void push(int n)
{
    top++;
    stack[top]=n;
}
void pop(int n)
{
    if(top==-1)
        printf("The stack is empty \n");
    else
    {
        stack[top--];
        display();
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\n stack is empty!");
    }
    else
    {
    printf("\n Elements present in stack\n");
    for(i=top;i>=0;i--)
    {
        printf("%d \n",stack[i]);
    }

    }
}
void main()
{

    while(1)
    {

        printf("Enter the choice:\n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:

        if(top==max-1)
           {
                printf("the stack is full\n");
            }
        else
            {
                printf("Enter the element to be inserted:");
                scanf("%d",&n);
                push(n);
            }
        break;
        case 2:
        pop(n);
        break;
        case 3:
        display();
        break;
        case 4:
        exit(0);
        }
    }

}

