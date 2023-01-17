// create login mechanism by entering right email & password.
#include<stdio.h>
#include<string.h>
main()
{
	char email[100];
	char reemail[100];
	int i=0;
	char pass[100];
	char repass[100];
	int j=0;
	
	printf("rnter E-mali:");
	scanf("%s",&email);
	
	printf("enter Re-Email:");
	scanf("%s",&reemail);
	
	i=strcmp(email,reemail);
	if(i==0)
	{
		printf("enter password:");
		scanf("%s",&pass);
		printf("enter Re password:");
		scanf("%s",&repass);
		j=strcmp(pass,repass);
		if(j==0)
		{
			printf("login");
		}
		else
		{
			printf("incorect password\try again");
		}
	}
	else{
		printf("incorrect email");
	}
}
