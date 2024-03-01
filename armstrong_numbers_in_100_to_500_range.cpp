#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a,d;
	printf("Armstrong numbers in range of 100 to 500 is:-\n");
	for(i=100;i<=500;i++)
	{
		a=0;
		for(j=i;j!=0;j=j/10)
		{
			d=j%10;
			a=a+d*d*d;
		}
		if(a==i)
		{
			printf("%d\n",i);
		}
	}
	getch();
}

