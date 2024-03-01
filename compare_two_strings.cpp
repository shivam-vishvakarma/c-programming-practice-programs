#include<stdio.h>
#include<conio.h>
int main()
{
	char a[20],b[20];
	int i,j,t;
	printf("Enter first string:- ");
	gets(a);
	printf("Enter second string:- ");
	gets(b);
	for(i=0;a[i]!='\0';i++);
	for(j=0;b[j]!='\0';j++);
	if(i==j)
	{
		t=0;
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]==b[i])
			{
				t=0;
			}
			else
			{
				t=1;
				break;
			}
		}
		if(t==0)
		{
			printf("Both strings are same\n");
		}
		else
		{
			printf("Both strings lenth are same but characters are diffrent\n");
		}
	}
	else
	{
		printf("Strings are not same\n");
	}
	getch();
}

