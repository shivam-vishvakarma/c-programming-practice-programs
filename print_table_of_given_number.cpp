#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter a number:-");
	scanf("%d",&n);
	printf("Table of %d is:-\n",n);
	for(i=1;i<=10;i++)
	{
		printf("%2d * %2d = %2d\n",n,i,n*i);
	}
	getch();
}

