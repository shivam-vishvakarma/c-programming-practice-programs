#include<stdio.h>
#include<conio.h>
int prime(int);//function declaration
int main()
{
	int n,t;
	printf("Enter a number:-");
	scanf("%d",&n);
	t=prime(n);
	if(t==1)
	{
		printf("Prime");
	}
	if(t==0)
	{
		printf("Not prime");
	}
	getch();
}//end of main()
int prime(int a)//function definition
{
	int i,t;
	if(a>3)
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				t=0;
				break;
			}
			else
			{
				t=1;
			}
		}
		return t;
	}
	else
	{
		return 1;
	}
}//end of functtion

