#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,k,res[10][10],n1,n2,n3,n4;
	printf("Enter the rows of matrix 1:");
	scanf("%d",&n1);
	printf("Enter the columns of matrix 1:");
	scanf("%d",&n2);
	printf("Enter the rows of matrix 2:");
	scanf("%d",&n3);
	printf("Enter the coloumns of matrix 2:");
	scanf("%d",&n4);
	if(n2!=n3)
	{
		printf("Matrix multiplication is not possible!!");
	}
	else
	{
		printf("Enter the elements of matrix 1:\n");
		for(i=0;i<n1;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("a[%d][%d]:",i+1,j+1);
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the elements of matrix 2:\n");
		for(i=0;i<n3;i++)
		{
			for(j=0;j<n4;j++)
			{
				printf("b[%d][%d]:",i+1,j+1);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<n1;i++)
		{
			for(j=0;j<n3;j++)
			{
				res[i][j]=0;
				for(k=0;k<n2;k++)
				{
					res[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		printf("The product fo the matrices are:\n");
		for(i=0;i<n1;i++)
		{
			for(j=0;j<n4;j++)
			{
				printf("%d\t",res[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
	
}