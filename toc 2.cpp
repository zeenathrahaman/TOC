#include<stdio.h>
#include<string.h>
main()
{
	char s[40],A='a';
	int n,c=0;
	printf("enter the string: ");
	scanf("%s",s);
	n=strlen(s);
	for (int i=0;i<n;i++)
	{
		if(s[i]=='a' || s[i]=='b' )
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
	if(s[0]=='a' && s[n-1]=='a')
	{
		printf("dfa");
    }
    else
    {
    	printf("not dfa");
	}
	}
}
