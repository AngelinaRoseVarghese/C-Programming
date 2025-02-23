//Description: A program to multiply two matices.Input the order of the matices(rows and column) and their elements. Display the resulting matix.
//Author: Angelina Rose Varghese
//Date: 18/02/2025
#include<stdio.h>
#include<math.h>
int main()
{
	int row1,column1,i,j,row2,column2,k,l;
	printf("Enter the rows and columns of first matix: ");
	scanf("%d%d",&row1,&column1);
	int num1[row1][column1];
	printf("Enter the elements: ");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column1;j++)
		{
			scanf("%d",&num1[i][j]);
		}
	}
	printf("Enter the rows and columns of second matix: ");
	scanf("%d%d",&row2,&column2);
	int num2[row2][column2];
	printf("Enter the elements: ");
	for(k=0;k<row2;k++)
	{
		for(l=0;l<column2;l++)
		{
			scanf("%d",&num2[k][l]);
		}
	}
	int result[row1][column2];
	for(i=0;i<row1;i++)
		{
			for(j=0;j<column2;j++)
			{
			        result[i][j]=0;
			}
		}
	if(column1!=row2)
	{
	    printf("Invalid");
	    return 0;
	}
    for(i=0;i<row1;i++)
	{
		for(j=0;j<column2;j++)
		{
			 for(k=0;k<column1;k++)
			  {
			       result[i][j]+=(num1[i][k])*(num2[k][j]);
			  }
		}	
	}
	printf("The multiplicaion of two matices is: \n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column2;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}	
