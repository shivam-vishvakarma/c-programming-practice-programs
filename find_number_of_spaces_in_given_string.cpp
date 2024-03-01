#include<stdio.h>
#include<conio.h>
int main()
{
	char a[30],b=32;
	int i,spc=0;
	printf("Enter your string-\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b)
		{
			spc++;
		}
	}
	printf("%d spaces in given string",spc);
	getch();
}

