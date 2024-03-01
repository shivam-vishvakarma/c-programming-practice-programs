#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	float x,fn,ans=0,xf;
	printf("Enter value of x:");
	scanf("%f",&x);
	printf("Enter number of steps:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fn=1;
		for(j=1;j<=i;j++)
		{
			fn=fn*j;
		}
		xf=(i*x)/fn;
		ans=ans+xf;
	}
	printf("Answer is %f",ans);
	getch();
}

