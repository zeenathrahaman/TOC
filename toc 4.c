#include<stdio.h>
#include<string.h>
main()
{
	char s[40],A='a';
	int n,i,c=0,pal,flag;
	printf("enter the string: ");
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
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
	for(i=n-1;i>=0;i++)
	{
		pal[flag]=s[i];
		flag+=1;
	}
	if(strcmp(s,pal)==0)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("NOT A PALINDROME\n");
		printf("string is not accepted");
	}
	}
}
