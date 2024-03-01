#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float r1,r2;
	printf("Enter values of a,b,c with sign according to ax^2+bx+c:- \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("You entered:- \n%dx^2+%dx+%d\n",a,b,c);
	if(4*a*c>0)
	{
		r1=(-b+sqrt(b*b-4*a*c))/2*a;
		r2=(-b-sqrt(b*b-4*a*c))/2*a;
		printf("Answer is:- \nx=%.2f,x=%.2f\n",r1,r2);
	}
	else
	{
		printf("This equation has no real roots\n");
	}
	getch();
}

