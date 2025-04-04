#include <stdio.h>
struct student
{
    char name[80];
    int roll;
    int mark;
    int avg;
};
int main()
{
    int count,i,j,k,total_mark=0,mark,average=0;
    printf("How many student's details you want to enter: ");
    scanf("%d",&count);
    struct student details[count];
    for(i=0;i<count;i++)
    {
        printf("\t\t\tEnter the marks of  student\n");
        total_mark=0;
        printf("Enter the name: ");
        scanf("%s",details[i].name);
        printf("Enter the roll no.: ");
        scanf("%d",&details[i].roll);
        for(j=0;j<3;j++)
        {
            printf("Enter the marks: ");
            scanf("%d",&mark);
            total_mark=total_mark+mark;
        }
        details[i].mark=total_mark;
        details[i].avg=total_mark/3;
    }
    printf("\t\t\tThe details of each student\n");
    for(k=0;k<count;k++)
    {
        printf("Name: %s\n",details[k].name);
        printf("Roll: %d\n",details[k].roll);
        printf("Total marks: %d\n",details[k].mark);
        printf("Average marks: %d\n",details[k].avg);
    }
    return 0;
}
