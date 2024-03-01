#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n,fn,cnt=1;
	float x,px,ans;
	printf("Enter value of x:-\n");
	scanf("%f",&x);
	printf("Enter number of steps:-\n");
	scanf("%d",&n);
//	main loop start
	for(i=1;cnt<=n;i++)
	{
		px=1;
		fn=1;
//		power loop star
		for(j=1;j<=i;j++)
		{
			px=px*x;
		}
//		power loop close
//		factorial loop sttart
		for(k=1;k<=i;k++)
		{
			fn=fn*k;
		}
//		factorial loop close
		if(i%2!=0)
		{
			if(cnt%2!=0)
			{
				ans=ans+(px/fn);
			}
			else
			{
				ans=ans-(px/fn);
			}
			cnt++;
		}
	}
	printf("Answer is %f",ans);
	getch();
}

