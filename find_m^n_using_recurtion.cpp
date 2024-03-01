#include<stdio.h>
#include<conio.h>
int power(int,int);
int main()
{
	int m,n,ans;
	printf("Enter base value:");
	scanf("%d",&m);
	printf("Enter power value:");
	scanf("%d",&n);
	ans=power(m,n);
	printf("Answer is:- %d",ans);
	getch();
}
int power(int b,int p)
{
	int pow;
	if(p==1)
	{
		return b;
	}
	pow=b*power(b,p-1);
	return pow;
}
