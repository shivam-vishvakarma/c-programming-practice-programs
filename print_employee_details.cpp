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
	struct employee e[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("Enter %d employee id:-",i+1);
		scanf("%d",&e[i].id);
		printf("Enter %d employee name:-",i+1);
		scanf("%s",e[i].name);
		printf("Enter %d employee salary:-",i+1);
		scanf("%f",&e[i].salary);
	}
	printf("Employees details are:- \n");
	for(i=0;i<35;i++)
	{
		printf("_");
	}
	printf("\n");
	printf("|%-2s|%-4s|%-15s|%-6s|\n","S.N.","ID","Employee Name","Salary");
	for(i=0;i<35;i++)
	{
		printf("_");
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("|%-2d|%-4d|%-15s|%-8.2f|\n",i+1,e[i].id,e[i].name,e[i].salary);
	}
	for(i=0;i<35;i++)
	{
		printf("_");
	}
	printf("\n");
	getch();
}

