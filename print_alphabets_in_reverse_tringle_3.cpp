#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	for(i=101;i>=97;i--)
	{
		for(k=i;k<101;k++)
		{
			printf(" ");
		}
		for(j=101-i;j<5;j++)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
	getch();
}

