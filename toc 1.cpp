#include<stdio.h>
#include<string.h>
main()
{
	char s[40],A='0';
	int n,c=0;
	printf("enter the string: ");
	scanf("%s",s);
	n=strlen(s);
	for (int i=0;i<n;i++)
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
	if(s[0]=='0' && s[n-1]=='1')
	{
		printf("dfa");
    }
    else
    {
    	printf("not dfa");
	}
	}
}
