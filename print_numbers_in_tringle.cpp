#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
	getch();
}

