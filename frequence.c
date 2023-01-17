// count frequency of each character in a string.
#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	char n;
	int i;
	int z=0;
	printf("enter value:");
	gets(a);
	
	printf("enter ferquency letter:");
	scanf("%c",&n);
	for(i=0;i<=strlen(a);i++)
	{
		if(n==a[i])
		{
		z++;
		}
	
	}printf("the frequency of %c=%d",n,z);
}


