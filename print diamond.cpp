#include<stdio.h>
#include<conio.h>
#include<time.h>
void delay(float number_of_seconds)
{
	float milli_second=1000*number_of_seconds;
	clock_t start_time=clock();
	while(clock()<start_time+milli_second);
}
int main()
{
	int i,j,k,n;
	printf("Enter a value:-");
	scanf("%d",&n);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	for(i=n/2;i<n;i++)
	{
		printf("\t");
		printf("\t");
		printf("\t");
		for(k=n-i;k!=0;k--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			delay(0.001);
			printf("* ");
		}
		printf("\n");
	}
	for(i=n-1;i!=0;i--)
	{
		printf("\t");
		printf("\t");
		printf("\t");
		for(k=n-i;k!=0;k--)
		{
			printf(" ");
		}
		for(j=1;j<i;j++)
		{
			delay(0.001);
			printf(" *");
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	getch();
}

