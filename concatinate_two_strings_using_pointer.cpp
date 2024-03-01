#include<stdio.h>
#include<conio.h>
int main()
{
	char *pa,a[20],*pb,b[20],*pc,c[40];
	int i=0,j=0;
	pa=a;
	pb=b;
	pc=c;
	printf("Enter first string:- ");
	gets(pa);
	printf("Enter second string:- ");
	gets(pb);
	while(*(pa+i)!='\0')
	{
		*(pc+i)=*(pa+i);
		i++;
	}
	*(pc+i)=' ';
	i++;
	while(*(pb+j)!='\0')
	{
		*(pc+i)=*(pb+j);
		i++;
		j++;
	}
	printf("Concatinated string is:- ");
	puts(pc);
	getch();
}

