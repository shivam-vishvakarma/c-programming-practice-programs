#include<stdio.h>
#include<conio.h>
int reverse(int);
int main()
{
	int n,t;
	printf("Enter a number:-");
	scanf("%d",&n);
	t=reverse(n);
	printf("given number is %s number",(t==n)?"a palindrome":"not a palindrome");
	getch();
}
int sum=0,rem;
int reverse(int a)
{
	if(a)
	{
		rem=a%10;
		sum=sum*10+rem;
		reverse(a/10);
	}
	else
	{
		return sum;
	}
	return sum;
}
