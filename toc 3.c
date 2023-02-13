#include<stdio.h>
#include<string.h>
main()
{
	char s[20],A ='0';
	int n,i,c=0;
	printf("enter the string:");
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
	  	if(s[i]=='0' || s[i]=='1' )
		{
			c=0;
		 } 
		 else
		 {
		 	c=1;
		 	printf("invalid");
		 	break;
		 }
	}
	if(c==0)
	{
		if(s[0]=='0' && s[1]=='1')
		{
			printf("the string belongs to CFG");
		}
		else
		{
			printf("the string does not belong to CFG");
		}
	}
}
