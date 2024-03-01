#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],sum=0,i;
	printf("Enter 10 elements:-\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum is:- %d",sum);
	getch();
}

