/*write a program to take characters from user
then print no of character entered by user after that
print characters skiping two charcters*/
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *p;
	char c;
	long n;
	printf("Enter your string:\nNOTE-After entering your string press-\nCTR+Z\n");
	p=fopen("abc.txt","w");
	do
	{
		c=getchar();
		putc(c,p);
	}
	while(c!=EOF);
	n=ftell(p);
	printf("No of characters is %ld\n",n-3);
	fclose(p);
	p=fopen("abc.txt","r");
	n=0;
	while(getc(p)!=EOF)
	{
		fseek(p,+n,0);
		c=getc(p);
		printf("%c",c);
		n=ftell(p);
		n=n+2;
	}
	fclose(p);
	getch();
}

