#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("enter a positive integer:");
	scanf("%d",&num);
	if(num/2==0)
	printf("the num is even number");
	else
	printf("the num is odd number");
	return 0;
}