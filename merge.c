#include<stdio.h>
int main()
{
    int first[50],sec[50],final[50],a,i,j,n1,n2,k;
    printf("\nEnter the size of first array:");
    scanf("%d",&n1);
    printf("Enter elements of first array: ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&first[i]);
        final[i]=first[i];
    }
    k=i;
    printf("\nEnter the size of second array:");
    scanf("%d",&n2);
    printf("\nEnter elements of second array:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&sec[i]);
        final[k]=sec[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0;i<k;i++)
    {
        printf("%d\t",final[i]);
    }

    for (i = 0; i < k;i++)
        {

            for (j = 0; j < k-1;j++)
            {

                if (final[j]<final[j+1])
                {

                    a =final[j+1];
                    final[j+1] =final[j];
                    final[j] = a;

                }

            }
        }
        printf("\nThe numbers arranged in decending order are given below \n");
        for (i = 0; i <k;i++)
        {
        printf("%d\n",final[i]);
        }
        return 0;

}
