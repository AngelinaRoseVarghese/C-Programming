#include<stdio.h>
#define pi 3.14
#define area_of_circle(radius) (pi*radius*radius);
#define area_of_cylinder(radius,height) (2*pi*radius*(radius+height));
int main()
{
	int radius,height,circle_area,cylinder_area;
	printf("Enter the radius: ");
	scanf("%d",&radius);
	printf("Enter the height: ");
	scanf("%d",&height);
	circle_area=area_of_circle(radius);
	cylinder_area=area_of_cylinder(radius,height);
	printf("The area of cylinder is: %d\n",cylinder_area);
	printf("The area of cirlce is: %d\n",circle_area);
	return 0;
}
