#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,t;
	printf("Prime numbers in range of 1 to 110 is:-\n");
	for(i=1;i<=110;i++)
	{
		if(i<=3)
		{
			printf("%d\n",i);
		}
		else
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					t=0;
					break;
				}
				else
				{
					t=1;
				}
			}
			if(t==1)
			{
				printf("%d\n",i);
			}
		}
	}
	getch();
}

