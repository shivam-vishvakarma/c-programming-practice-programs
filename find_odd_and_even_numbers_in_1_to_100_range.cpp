#include<stdio.h>
#include<conio.h>
int main()
{
	int even=0,odd=0,i;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			even++;
		}
		if(i%2!=0)
		{
			odd++;
		}
	}
	printf("In range of 1 to 100:-\n%d even numbers \nand \n%d odd numbers",even,odd);
	getch();
}

