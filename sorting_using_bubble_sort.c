// Description: To sort the elements in array using bubble sort
//Author:Angelina Rose Varghese
//Date:12/02/2025
#include <stdio.h>

int main()
{
    int i,count,j,temp;
    printf("How many elements you want to enter: ");
    scanf("%d",&count);
    int num[count];
    printf("Enter the elements: ");
    for (i=0;i<count;i++)
    {
        scanf("%d",&num[i]);
    }
    for (i=0;i<count-1;i++)
    {
        for (j=0;j<count-1-i;j++)
        {
            if (num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for (i=0;i<count;i++)
    {
        printf("%d\t",num[i]);
    }
    return 0;
}
