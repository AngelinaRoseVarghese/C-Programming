#include<stdio.h>
void read_array(int num[],int count);
void print_array(int num[],int count);
int main()
{
	int count,i;
	printf("Enter the count: ");
	scanf("%d",&count);
	int num[count];
	read_array(num,count);
	print_array(num,count);
	return 0;
	}
	void read_array(int num[],int count)
	{
		int i;
		printf("Enter the elements: ");
		for(i=0;i<count;i++)
		{
			scanf("%d",&num[i]);
		}
		}
	void print_array(int num[],int count)
	{
		int i;
		printf("The array is: ");
		for(i=0;i<count;i++)
		{
			printf("%d\t",num[i]);
		}
		
	}
		
