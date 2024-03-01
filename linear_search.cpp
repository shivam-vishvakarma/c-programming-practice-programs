#include<stdio.h>
#include<conio.h>
int linear_search(int*,int);
int main()
{
	int a[10],b,t,i;
	printf("Enter 10 numers:-\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a numer you want to search:-");
	scanf("%d",&b);
	t=linear_search(a,b);
	if(t!=0)
	{
		printf("Numer found at %d index\n",t);
	}
	else
	{
		printf("Numer not found\n");
	}
	getch();
}
int linear_search(int *a,int b)
{
	int i,t;
	for(i=0;i<10;i++)
	{
		if(*(a+i)==b)
		{
			t=i;
			break;
		}
		else
		{
			t=0;
		}
	}
	return t;
}
