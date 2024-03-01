#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter a number:-");
	scanf("%d",&a);
	if(a<0)
	{
		printf("You entered a negative value\n");
	}
	if(a>0)
	{
		printf("You entered a positive value\n");
	}
	getch();
}
