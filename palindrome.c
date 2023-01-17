// check whether a string is palindrome or not.
#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	char rev[100];
	
	int i;
	printf("enter name:");
	scanf("%s",&name);
	
	strcpy(rev,name);
	i=strcmp(strrev(rev),name);
	if(i==0)
	{
		printf("palindrom");
	}
	else
	{
		printf("not palindrome");
	}
}
	

