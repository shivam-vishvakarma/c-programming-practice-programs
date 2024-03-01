#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a=0,d,i;
	printf("Enter a number:-");
	scanf("%d",&n);
	for(i=n;i!=0;i=i/10)
	{
		d=i%10;
		a=a+d*d*d;
	}
	if(a==n)
	{
		printf("Given number is armstrong number\n");
	}
	else
	{
		printf("Given number is not a armstrong number\n");
	}
	getch();
}

