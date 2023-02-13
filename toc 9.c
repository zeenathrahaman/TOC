#include<stdio.h>
#include<string.h>
int main()
{
	char s[20], A ='0';
	int n,i,c=0;
	printf("enter the string:");
	scanf("%s",s);
	n=strlen(s);
	for (i=0;i<n;i++)
	{
		if(s[i]=='0' || s[i]=='1')
		{
		    c=0;
		}
		else
		{
			c=1;
			printf("INVALID");
			break;
		}
	}
	if(c==0)
	{
		if(s[0]=='0' && s[n-1]=='0') 
		{
			printf("the given stting was accepted");
		}
		else
		{
			printf("NOT NFA");
		}
	}
}
