#include<stdio.h>
#include<conio.h>
int main()
{
	int a,t=0;
	printf("Enter a number:-");
	scanf("%d",&a);
	if(a%5==0)
	{
		t=t+5;
	}
	if(a%11==0)
	{
		t=t+11;
	}
	if(t==5)
	{
		printf("Given number is divisible by 5");
	}
	else if(t==11)
	{
		printf("Given number is divisible by 11");
	}
	else if(t==5+11)
	{
		printf("Given number is divisible by both 5 and 11");
	}
	else
	{
		printf("Given number dose not divisible by 5 and 11");
	}
	getch();
}
