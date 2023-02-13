#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int n,i,c=0;
	printf("Enter the string: ");
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
	 if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
	 {
	 	c=1;
	 	break;
	 }
	}
	if(c==1)
	{
		printf("The string is accepted");
	}
	else
	{
		printf("The string is not accepted");
	}
}
