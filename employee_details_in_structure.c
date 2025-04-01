#include<stdio.h>
struct employee
{
	char name[100];
	int ID;
	int salary;
};
int main()
{
	int count,i,j;
	printf("How many employee's details you want to enter: ");
	scanf("%d",&count);
	struct employee details[count];
	for(i=0;i<count;i++)
	{
		printf("Enter the name: ");
		scanf("%s",details[i].name);
		printf("Enter the ID number: ");
		scanf("%d",&details[i].ID);
		printf("Enter the salary: ");
		scanf("%d",&details[i].salary);
	}
	printf("The details of each Employee\n");
	for(i=0;i<count;i++)
	{
		printf("Name: %s\n",details[i].name);
		printf("ID number:%d\n ",details[i].ID);
		printf("Salary:%d\n",details[i].salary);
	}
	return 0;
}
