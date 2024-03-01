#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int n,f;
	printf("Enter a number:-");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial of %d is:-%d",n,f);
	getch();
}
int fact(int a)
{
	int i,fact=1;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;
}

