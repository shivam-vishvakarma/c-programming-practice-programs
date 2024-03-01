#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	for(i=1;i<6;i++)
	{
		for(k=6-i;k!=0;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	getch();
}

