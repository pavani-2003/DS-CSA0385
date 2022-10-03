#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	unsigned long long factorial=1;
	printf("enter a number:");
	scanf("%d",&n);
	if(n<0)
		printf("invalid input,plz enter the valid input:");
	else
	{
		for (i=0;i<=n;i++)
		{
			factorial*=i;
			factorial=i*factorial;
		}
		printf("Factorial of number %d=%llu",n,factorial);
	}
	return 0;
}