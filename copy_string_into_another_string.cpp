#include<stdio.h>
#include<conio.h>
int main()
{
	char *pa,a[20],*pb,b[20];
	int i=0;
	pa=a;
	pb=b;
	printf("Enter first string:- ");
	gets(pa);
	while(*(pa+i)!='\0')
	{
		*(pb+i)=*(pa+i);
		i++;
	}
	printf("Copied string is:- ");
	puts(pb);
	getch();
}

