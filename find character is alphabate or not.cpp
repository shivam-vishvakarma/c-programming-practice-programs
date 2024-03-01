#include<stdio.h>
#include<conio.h>
int main()
{
	char a;
	printf("Enter a element:-");
	scanf("%c",&a);
	if(a>=65&&a<=90||a>=97&&a<=122)
	{
		printf("Alphabate");
	}
	else
	{
		printf("Not alphabate");
	}
	getch();
}
