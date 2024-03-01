#include<stdio.h>
#include<conio.h>
int gcd(int,int);//function decleration
int main()
{
	int a,b,ans;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	ans=gcd(a,b);
	printf("Answer is %d",ans);
	getch();
}
//function deffinition
int gcd(int a,int b)
{
	int g=1,i;
	for(i=2;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			g=i;
		}
	}
	return g;
}//end of function
