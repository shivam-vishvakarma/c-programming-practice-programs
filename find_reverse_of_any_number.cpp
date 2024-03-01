#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r=0,i;
	printf("Enter a number:-");
	scanf("%d",&n);
	for(i=n;i!=0;i=i/10)
	{
		r=r*10+i%10;
	}
	printf("Reverse is %d",r);
	getch();
}

