#include<stdio.h>
int main()
{
	int c,d,temp;	//c and d are the values to be swapped
	printf("Enter the value of C and D : ");
	scanf("%d%d",&c,&d);
	printf("Values before change \nC : %d\nD : %d\n",c,d);
	temp = c;
	c = d;
	d = temp;
	printf("Values after change \nC : %d\nD : %d\n",c,d);
	return 0;
}
