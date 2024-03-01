#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	float fi,ans=0;
	printf("Enter number of steps:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fi=1;
		for(j=1;j<=i;j++)
		{
			fi=fi*j;
		}
		ans=ans+fi/i;
	}
	printf("Answer is:- %f",ans);
	getch();
}

