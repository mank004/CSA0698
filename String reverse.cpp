#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],d[20];
	int count=0,b,i,c;
	printf("Enter the string:");
	scanf("%s",&s);
	b=strlen(s);
	c=b;
	for(i=0;i<b;i++)
	{
		d[i]=s[c-1];
		c--;
	}
	printf("The reverse of the string is:%s",d);
	return 0;
}