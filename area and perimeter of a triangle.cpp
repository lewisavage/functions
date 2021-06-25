/*prints area,perimeter of a rectangle*/
#include<stdio.h>
int main()
{
	float area, perimeter;
	float length,width;
	printf("enter length of the rectangle ");
	scanf("%f",&length);
	printf("enter width of the rectangle");
	scanf("%f",&width);
	area=length*width;
	printf("area of the rectangle%.2f",area);
	perimeter=2*length+2*width;
	printf("perimeter of the rectangle%.2f",perimeter);
	
	return 0;
}
