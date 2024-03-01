#include<stdio.h>
#include<conio.h>
int binary_to_decimal(int);
int main()
{
	int n,ans;
	printf("Enter binary number:-\n");
	scanf("%d",&n);
	ans=binary_to_decimal(n);
	printf("Answer is %d",ans);
	getch();
}
int binary_to_decimal(int a)
{
	int i,j,power_of_2,ans=0;
	for(i=0;a>0;i++,a=a/10)
	{
		if(a%10==1)
		{
			power_of_2=1;
			for(j=1;j<=i;j++)
			{
				power_of_2=power_of_2*2;
			}
			ans=ans+power_of_2;
		}
	}
	return ans;
}
