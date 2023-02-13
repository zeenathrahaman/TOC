#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],pal[20],flag=0;
	int n,c=0;
	printf("Enter the string: ");
	scanf("%s",s);
	n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0' || s[i]=='1' )
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
	for(int i=n-1;i>=0;i--)
	{
		pal[flag]=s[i];
		flag+=1;
	}
//	printf("REVERSE: %s",pal);
//	printf("STRING: %s",s);
	if(strcmp(s,pal)==0)
	{
		printf("PALINDROME\n");
		printf("String is accepted");
	}
	else 
	{
		printf("NOT A PALINDROME\n");
		printf("String is not accepted");
	}
	}
}
