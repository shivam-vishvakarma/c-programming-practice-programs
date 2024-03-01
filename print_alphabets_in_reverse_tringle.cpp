#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n;
	for(i=0;i<5;i++)
	{
		n=97;
		for(k=5-i;k!=0;k--)
		{
			printf("  ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%c ",n);
			n++;
		}
		printf("\n");
	}
	getch();
}

