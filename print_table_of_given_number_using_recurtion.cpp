#include<stdio.h>
#include<conio.h>
int print_table(int,int=1);
int main()
{
	int n;
	printf("Enter a number:-");
	scanf("%d",&n);
	printf("Table of %d is:-\n",n);
	print_table(n);
	getch();
}
int print_table(int a,int i)
{
	if(i==11)
	{
		return 0;
	}
	printf("%2d * %2d = %2d\n",a,i,a*i);
	print_table(a,i+1);
	return 0;
}
