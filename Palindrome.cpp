#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int l,count=0,b,i,c;
	printf("Enter the string:");
	scanf("%s",&s);
	b=strlen(s);
	c=b;
	for(i=0;i<c;i++)
	{
		if(s[i]==s[b-1])
		{
			count=count+1;
		}
		b--;
	}
	if(count==c)
	{
		printf("%s is a palindrome",s);
	}
	else
	{
	    printf("%s is not a palindrome",s);	
	}
	return 0;
}