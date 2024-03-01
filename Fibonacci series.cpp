#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1,b=2,c,n,i;
	printf("Enter number of steps:");
	scanf("%d",&n);
	if(n==1)
	{
		printf("%d step is %d\n",1,a);
	}
	else if(n==2)
	{
		printf("%d step is %d\n",1,a);
		printf("%d step is %d\n",2,b);
	}
	else
	{
		printf("%d step is %d\n",1,a);
		printf("%d step is %d\n",2,b);
		for(i=3;i<=n;i++)
		{
			c=a+b;
			printf("%d step is %d\n",i,c);
			a=b;
			b=c;
		}
	}
	getch();
}

