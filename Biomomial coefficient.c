#include<stdio.h>
int fact(int x)
{
	int fact=1;
	while(x!=0)
	{
		fact=fact*x;
		x--;
	}
	return fact;
	
}
int main()
{
	int n,c,g;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the value of c:");
	scanf("%d",&c);
	g=fact(n)/(fact(c)*fact(n-c));
	printf("The Bionomial co-efficient:%d",g);
	return 0;
	
}
