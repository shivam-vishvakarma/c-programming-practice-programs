#include<stdio.h>
#include<conio.h>
int sum(int*);
int main()
{
	int a[10],ans,i;
	printf("Enter 10 numers:-\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	ans=sum(a);
	printf("Sum of array elements is:- %d",ans);
	getch();
}
int sum(int *a)
{
	int i,s=0;
	for(i=0;i<10;i++)
	{
		s=s+*(a+i);
	}
	return s;
}
