#include<stdio.h>
int main()
{
	int n,n1,sum=0,i;
	printf("Enter the number:");
	scanf("%d",&n);
	n1=n;
	for(i=1;i<n1;i++)
	{
		if(n1%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("%d is a Perfect number",n);
	}
	else{
		printf("%d is Not a perfect number",n);
	}
	return 0;
}
