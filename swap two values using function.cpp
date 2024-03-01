#include<stdio.h>
#include<conio.h>
void swap(int * ,int * );
void swap(int * a,int * b)
{
	int z;
	z=*a;
	*a=*b;
	*b=z;
	printf("%d %d",*a,*b);
}
int main()
{
	int a,b;
	printf("Enter two values:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	getch();
}

