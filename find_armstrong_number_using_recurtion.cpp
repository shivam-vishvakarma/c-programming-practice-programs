#include<stdio.h>
#include<conio.h>
int armstrong(int);
int main()
{
	int n,t;
	printf("Enter a number:-");
	scanf("%d",&n);
	t=armstrong(n);
	printf("given number is %s number",(t==n)?"a armstrong":"not a armstrong");
	getch();
}
int armstrong(int a)
{
	int d,arm;
	if(a==0)
	{
		return 0;
	}
	d=a%10;
	arm=d*d*d+armstrong(a/10);
	return arm;
}
