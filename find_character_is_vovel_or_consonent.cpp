#include<stdio.h>
#include<conio.h>
int main()
{
	char a;
	printf("Enter a character:");
	scanf("%c",&a);
	switch(a)
	{
		case 'a':
		case 'A':
		case 'e':	
		case 'E':	
		case 'i':	
		case 'I':	
		case 'o':	
		case 'O':	
		case 'u':	
		case 'U':printf("Character is vovel\n");break;
		default:printf("Character is consonent\n");
	}
	getch();
}

