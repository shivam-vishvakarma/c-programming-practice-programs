#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],*pa,b=0,i;
    pa=a;
    printf("Enter 10 elements-\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",pa+i);
    }
    printf("You entered-");
    for(i=0;i<10;i++)
    {
        printf("%d  ",*(pa+i));
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        if(*(pa+i)>b)
        {
            b=*(pa+i);
        }
    }
    printf("Largest number is-%d\n",b);
    getch();
}