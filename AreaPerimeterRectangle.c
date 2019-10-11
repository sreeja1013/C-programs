#include<stdio.h>
int main()
{
	float length,breath,area,perimeter;
	printf("Enter the length and breath of the rectangle : ");
	scanf("%f%f",&length,&breath);
	area = (length*breath);
	perimeter = 2*(length+breath);
	printf("Area of the rectangle : %f \n",area);
	printf("Perimeter of the rectangle : %f",perimeter);
	return 0;
}
