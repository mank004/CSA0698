#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int count=0,i=0;
	printf("Enter the string:");
	scanf("%s",&s);
	while(s[i]!='\0')
	{
		count=count+1;
		i++;
	}
	printf("The length of the string:%d",count);
}