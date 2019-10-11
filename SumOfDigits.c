#include<stdio.h>
int main()
{
	int num,sod=0,remainder;	//sod = sum of digits, num = number 
	printf("Enter the number : ");
	scanf("%d",&num);
	while(num>0)
	{
		remainder = num%10;
		sod = sod+remainder;
		num = num/10;
	}
	printf("Sum of digits : %d",sod);
	return 0;
}
