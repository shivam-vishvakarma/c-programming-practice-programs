#include<stdio.h>
#include<conio.h>
int fabonacci(int);
int main()
{
	int i,fab,n;
	printf("Enter number of steps:-\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fab=fabonacci(i);
		printf("%d\n",fab);
	}
	getch();
	return 0;
}
int fabonacci(int a)
{
	int f;
	if(a<=1)
	{
		return 1;
	}
	f=fabonacci(a-2)+fabonacci(a-1);
	return f;
}
