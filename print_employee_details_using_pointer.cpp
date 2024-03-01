#include<stdio.h>
#include<conio.h>
struct employee
{
	int id;
	char name[20];
	float salary;
};
int main()
{
	struct employee *ps1,*ps2,s1,s2;
	int i;
	ps1=&s1;ps2=&s2;
	printf("Enter 1 employee id:-");
	scanf("%d",&ps1->id);
	printf("Enter 1 employee name:-");
	scanf("%s",ps1->name);
	printf("Enter 1 employee salary:-");
	scanf("%f",&ps1->salary);
	printf("Enter 2 employee id:-");
	scanf("%d",&ps2->id);
	printf("Enter 2 employee name:-");
	scanf("%s",ps2->name);
	printf("Enter 2 employee salary:-");
	scanf("%f",&ps2->salary);
	printf("Employees details are:- \n");
	for(i=0;i<37;i++)
	{
		printf("_");
	}
	printf("\n");
	printf("|%-4s|%-4s|%-15s|%-8s|\n","S.N.","ID","Employee Name","Salary");
	for(i=0;i<37;i++)
	{
		printf("_");
	}
	printf("\n");
	printf("|%-4d|%-4d|%-15s|%-8.2f|\n",1,ps1->id,ps1->name,ps1->salary);
	printf("|%-4d|%-4d|%-15s|%-8.2f|\n",2,ps2->id,ps2->name,ps2->salary);
	for(i=0;i<37;i++)
	{
		printf("_");
	}
	printf("\n");
	getch();
}

