#include<stdio.h>
#include<conio.h>
int g;
int gcd(int,int,int=1);
int main()
{
	int a,b,ans;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	ans=gcd(a,b);
	printf("Answer is %d",ans);
	getch();
}
int gcd(int a,int b,int i)
{
	extern int g;
	if(i>a||i>b)
	{
		return g;
	}
	if(a%i==0&&b%i==0)
	{
		g=i;
	}
	g=gcd(a,b,i+1);
	return g;
}
