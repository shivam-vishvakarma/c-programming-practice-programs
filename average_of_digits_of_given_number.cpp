#include<stdio.h>
#include<conio.h>
float avg_of_digit(int);//function declaration
int main()
{
	int a;
	float avg;
	printf("Enter a number:-");
	scanf("%d",&a);
	avg=avg_of_digit(a);
	printf("Average of digits of given number is:-%f",avg);
	getch();
}
//function definition
float avg_of_digit(int n)
{
	int i;
	float s=0,c=0,avg;
	for(i=n;i!=0;i=i/10)
	{
		s=s+i%10;
		c++;
	}
	avg=s/c;
	return avg;
}
