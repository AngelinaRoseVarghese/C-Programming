#include<stdio.h>
int main()
{
int roll_no, age;
float height;
char grade;
printf("Enter roll number of the student: ");
scanf("%d",&roll_no);
printf("Enter age of the student: ");
scanf("%d",&age);
printf("Enter height of the student: ");
scanf("%f",&height);
printf("Enter grade of the student: ");
scanf(" %c",&grade);
printf("The roll no of the student is:%d\n",roll_no);
printf("The age of the student is:%d\n",age);
printf("The height of the student is:%f\n",height);
printf("The grade of the student is: %c\n",grade);
return 0;
}
