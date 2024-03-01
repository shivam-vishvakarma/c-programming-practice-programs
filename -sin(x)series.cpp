#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n,cnt=1;
	float x,xn,fn,xf,ans=0;
	printf("Enter value of x:-");
	scanf("%f",&x);
	printf("Enter number of steps:");
	scanf("%d",&n);
	for(i=1;cnt<=n;i++)
	{
		xn=1;
		fn=1;
		for(j=1;j<=i;j++)
		{
			xn=xn*x;
		}
		for(k=1;k<=i;k++)
		{
			fn=fn*k;
		}
		xf=xn/fn;
		if(i%2!=0)
		{
			if(cnt%2==0)
			{
				ans=ans+xf;
				cnt++;
			}
			else
			{
				ans=ans-xf;
				cnt++;
			}
		}
	}
	printf("Answer is %f",ans);
	getch();
}
