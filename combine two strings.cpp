#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char a[20],b[20],c[20];
	printf("Enter first string:");
	gets(a);
	printf("Enter second string:");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	c[i]=' ';
	i++;
	for(j=0;b[j]!='\0';j++)
	{
		c[i]=b[j];
		i++;
	}
	c[i]='\0';
	printf("Combined string is-\n");
	puts(c);
	getch();
}
