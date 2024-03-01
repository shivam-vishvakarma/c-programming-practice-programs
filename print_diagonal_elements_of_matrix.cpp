#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],i,j;
	printf("Enter array elements:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Diagonal elements of metrix are:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				printf("%d ",a[i][j]);
			}
		}
	}
	getch();
}
