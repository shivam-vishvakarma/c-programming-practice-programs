#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=97;i<102;i++)
	{
		for(j=102-i;j!=0;j--)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
	getch();
}

