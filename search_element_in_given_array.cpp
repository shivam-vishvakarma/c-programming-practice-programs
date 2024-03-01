#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],b,i,t=0;
	printf("Enter 10 numbers:-\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a number you want to find:-\n");
	scanf("%d",&b);
	for(i=0;i<10;i++)
	{
		if(a[i]==b)
		{
			t=i;
			break;
		}
		else
		{
			t=0;
		}
	}
	if(t!=0)
	{
		printf("Number found at %d",t);
	}
	else
	{
		printf("Number is not found in given array");
	}
	getch();
}

