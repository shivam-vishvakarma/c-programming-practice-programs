#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
	int n,ans;
	printf("Enter any number:-\n");
	scanf("%d",&n);
	ans=sum(n);
	printf("Sum of digits of your given  number is: %d",ans);
	getch();
}
int sum(int a)
{
	int s;
	if(a==0)
	{
		return 0;
	}
	s=a%10+sum(a/10);
	return s;
}
