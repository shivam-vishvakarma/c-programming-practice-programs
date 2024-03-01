#include <stdio.h>
void main()
{
    FILE *p;
    int roll;
    char name[20];
    p = fopen("abc.txt", "w");
    printf("Enter roll no. :");
    fscanf(stdin, "%d%s", &roll, name);
    fprintf(p, "%d%s", roll, name);
    fclose(p);
    p = fopen("abc.txt", "r");
    while ((fscanf(p, "%d%s", roll, name)) != EOF)
    {
        printf("%d  %s\n", roll, name);
    }
    fclose(p);
}