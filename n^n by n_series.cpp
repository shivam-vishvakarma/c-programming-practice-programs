#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	float pn,ans=0;
	printf("Enter number of steps:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		pn=1;
		for(j=1;j<=i;j++)
		{
			pn=pn*i;
		}
		ans=ans+pn/i;
	}
	printf("Answer is:- %f",ans);
	getch();
}

