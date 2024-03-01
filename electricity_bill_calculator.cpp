#include<stdio.h>
#include<conio.h>
int main()
{
	int u,b;
	printf("Enter your consumed units:-");
	scanf("%d",&u);
	if(u>500)
	{
		b=500+(7*200)+(8*200)+(u-500)*10;
		printf("Your bill is %d\n",b);
	}
	else if(u>300)
	{
		b=500+(7*200)+(u-300)*8;
		printf("Your bill is %d\n",b);
	}
	else if(u>100)
	{
		b=500+(u-100)*7;
		printf("Your bill is %d\n",b);
	}
	else
	{
		printf("Your bill is 500\n");
	}
	getch();
}

