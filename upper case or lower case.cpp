#include<stdio.h>
#include<conio.h>
int main()
{
	char a;
	printf("Enter a alphabet:-");
	scanf("%c",&a);
	if(a>=65&&a<=90)
	{
		printf("Upper case letter");
	}
	else if(a>=97&&a<=122)
	{
		printf("Lower case letter");
	}
	else
	{
		printf("Not a alphabet");
	}
	getch();
}
