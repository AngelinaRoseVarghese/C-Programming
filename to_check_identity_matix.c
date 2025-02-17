// Description: Check if given matrix is identity matrix.
//Author:Angelina Rose Varghese
// Date: 17/02/2025
 #include <stdio.h>
int main()
{
    int row,column,i,j,sum=0;
    printf("Enter the no. of rows and columns: ");
    scanf("%d%d",&row,&column);
    int num[row][column];
    printf("Enter the elements: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    if(row!=column)
    {
        printf("Not an identity matrix");
        return 0;
    }
    else
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                if((i==j && num[i][j]!=1)||(i!=j && num[i][j]!=0))
                {
                       printf("It is not an identity matrix");
                       return 0;
                }
             }
            
        }
    }
    printf("is an identity matrix");
    return 0;
}
