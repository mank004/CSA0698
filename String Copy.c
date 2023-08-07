#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],a[20];
	int l,i;
	printf("Enter the string:");
	scanf("%s",&s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		a[i]=s[i];
	}
	printf("The copied string:%s",a);
	return 0;
}
