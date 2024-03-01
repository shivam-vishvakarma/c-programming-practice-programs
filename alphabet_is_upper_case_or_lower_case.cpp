#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char a;
	printf("Enter a alphabate:-");
	scanf("%c",&a);
	if(isupper(a)!=0)
	{
		printf("Alphabet is upper case letter\n");
	}
	else if(islower(a)!=0)
	{
		printf("Alphabet is lower case letter\n");
	}
	else
	{
		printf("Not alphabet");
	}
	getch();
}
