#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *p;
	char a;
	p=fopen("abc.txt","w");
	printf("Enter a character:-\n");
	while((a=getchar())!=EOF)
	{
		putc(a,p);
	}
	fclose(p);
	p=fopen("abc.txt","r");
	printf("You entered:-\n");
	while((a=getc(p))!=EOF)
	{
		printf("%c",a);
	}
	fclose(p);
	getch();
}

