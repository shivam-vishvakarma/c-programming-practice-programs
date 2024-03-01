#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,mn=1,i;
	printf("Enter base number:-");
	scanf("%d",&m);
	printf("Enter power of number:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		mn=mn*m;
	}
	printf("Answer is %d",mn);
	getch();
}

