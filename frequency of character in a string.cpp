#include<stdio.h>
#include<conio.h>
//#include"Functions.cpp"
int main()
{
	int i,c=0;
	char a[20],b;
	printf("Enter a string:-");
	gets(a);
	printf("Enter a character:-");
	scanf("%c",&b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b)
		c++;
	}
	printf("Frequency of %c is %d\n",b,c);
	getch();
}
