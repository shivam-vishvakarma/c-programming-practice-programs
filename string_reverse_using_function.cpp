#include<stdio.h>
#include<conio.h>
char * rev(char *a)
{
	int i,j;
	char rev[20];
	for(i=0;*(a+i)!='\0';i++);
	for(j=0,i=i-1;i>-1;i--,j++)
	{
		rev[j]=*(a+i);
	}
	rev[j]='\0';
	puts(a);
	puts(rev);
	return rev;
}
int main()
{
	char a[20],*r;
	printf("Enter a string:");
	gets(a);
	r=rev(a);
	printf("Revers is:");
	puts(r);
	getch();
}

