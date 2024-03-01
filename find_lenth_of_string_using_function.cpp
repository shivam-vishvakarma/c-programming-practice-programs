#include<stdio.h>
#include<conio.h>
int strlen(char*);
int main()
{
	char s[20],len;
	printf("Enter a string:- ");
	gets(s);
	len=strlen(s);
	printf("Lenth of string is:- %d",len);
	getch();
}
int strlen(char *s)
{
	int i;
	for(i=0;*(s+i)!='\0';i++);
	return i;
}
