#include<stdio.h>
int main()
{
	int row1,column1,row2,column2,i,j,flag=0;
	printf("Enter the no of rows and columns of the matrix: ");
	scanf("%d%d",&row1,&column1);
	int num[row1][column1];
	int transpose[row1][column1];
	printf("Enter the elements: ");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column1;j++)
		{
			scanf("%d",&num[i][j]);
			transpose[j][i]=num[i][j];
		}
	}
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column1;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column1;j++)
		{
			if (transpose[i][j]!=num[i][j])
			{
			flag=1	;
			break;
			}
			
		}
	}
	if(flag==0)
	   printf("It is a symmetric\n");
	else
	   printf("It is not symmetric\n");			
	return 0;
}
