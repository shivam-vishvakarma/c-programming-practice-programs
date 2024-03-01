#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
	int a,ans;
	printf("Enter a number:-");
	scanf("%d",&a);
	ans=factorial(a);
	printf("Factorial of %d is %d",a,ans);
	getch();
}
int factorial(int n)
{
	int f;
	if(n==1)
	{
		return 1;
	}
	f=n*factorial(n-1);
	return f;
}
