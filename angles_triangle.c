// Description: To check whether a triangle is valid or not when the 3 angles of the triangle are entered through keyboard
// Author: Angelina Rose Varghese
#include<stdio.h>
int main()
{
	int angle1,angle2,angle3;
	printf("Enter the angle of 3 sides: ");
	scanf("%d,%d,%d",&angle1,&angle2,&angle3);
	if (angle1+angle2+angle3==180)
	{
		if (angle1==angle2==angle3==180 )
		{
			printf("Invalid\n");
		}
		else
		{
			printf("It is a triangle\n");
		}
	}
	else
	{
		printf("It is not triangle\n");
	}
	return 0;
}
