// PROJECT-01-EMPLOYEE-MANAGEMENT-SYSTEM
/*
key points
add employee record
list all employee
modify  record
sreach record
delete a record
exit

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct edata
{
    char name[100];
    char eid[100];
    char num[11];
    char add[150];
    int age;
    float salary;
};

void cndb();
void adr();
void laer();
int main()
{
    for (int i = 0; i < 101; i++)
    {
        printf("-");
    }
    printf("\n                                   EMPLOYEE MANGEMENT SYSTEM                                       \n");
    for (int i = 0; i < 101; i++)
    {
        printf("-");
    }
    printf("\n                                        SELECT OPTION'S ");
    printf("\n                                       1.CREATE NEW DATA BASE");
    printf("\n                                       2.ADD EMPLOYEE RECORD");
    printf("\n                                       3.LIST OF ALL EMPLOYEE RECORD");
    printf("\n                                       4.EDIT EMPLOYEE INFORMATION");
    printf("\n                                       5.SREACH A PARTICULER EMPLOYEE");
    printf("\n                                       6.EXIT\n");
    for (int i = 0; i < 101; i++)
    {
        printf("-");
    }
    int option;
    printf("\nSELECT ANY OPTION:\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
    {

        cndb();
        break;
        // for creating new data base
    }
    case 2:
    {
        adr();
        break;
    }
    case 3:
    {
        laer();
        break;
    }

    default:
        break;
    }
}
void cndb()
{
    system("cls");
    for (int i = 0; i < 101; i++)
    {
        printf("-");
    }
    printf("\nCREATE NEW DATA BASE");
    printf("\n");

    for (int i = 0; i < 101; i++)
    {

        printf("-");
    }
    char file[100];
    FILE *f1;
    printf("\nENTER FILE NAME:");
    scanf("%s", file);
    if (f1 == NULL)
    {
        printf("\nFILE DOES NOT CREATED");
        exit(1);
    }
    else
    {
        f1 = fopen(file, "w");
        fclose(f1);
    }
}
void adr()
{
    system("cls");

    for (int i = 0; i < 101; i++)
    {
        printf("-");
    }
    printf("\nADD EMPLOYEE RECORD");
    printf("\n");

    for (int i = 0; i < 101; i++)
    {

        printf("-");
    }
    char file2[100];
    FILE *f2;
    printf("\nENTER FILE NAME:");
    scanf("%s", file2);
    if (f2 == NULL)
    {
        printf("\nFILE DOES NOT EXSITS");
        exit(1);
    }

    else
    {
        printf("\n");
        for (int i = 0; i < 101; i++)
        {

            printf("-");
        }
        f2 = fopen(file2, "a");
        printf("\nENTER TOTAL NUMBER OF EMPOLYE YOU WANT TO ADD:");
        int n;
        scanf("%d", &n);
        struct edata d[n];
        printf("\n");
        for (int i = 0; i < 101; i++)
        {

            printf("-");
        }
        for (int i = 0; i < n; i++)
        {
            fflush(stdin);
            printf("\nENTER EMPLOYEE ID:");
            fgets(d[i].eid, sizeof(d[i].eid), stdin);
            fprintf(f2, "EMPLOYEE ID:%s\n", d[i].eid);
            fflush(stdin);
            printf("\nENTER EMPLOYEE NAME:");
            fgets(d[i].name, sizeof(d[i].name), stdin);
            fprintf(f2, "EMPLOYEE NAME:%s\n", d[i].name);
            fflush(stdin);
            printf("\nENTER EMPLOYEE AGE:");
            scanf("%d", &d[i].age);
            fprintf(f2, "EMPLOYEE AGE:%d\n", d[i].age);
            fflush(stdin);
            printf("\nENTER EMPLOYEE ADDRESS:");
            fgets(d[i].add, sizeof(d[i].add), stdin);
            fprintf(f2, "EMPLOYEE ADDRESS:%s\n", d[i].add);
            fflush(stdin);
        start:
            printf("\nENTER EMPLOYEE PHONE NUMBER:");
            scanf("%s", &d[i].num);
            if (strlen(d[i].num) == 10)
            {
                fprintf(f2, "EMPLOYEE PHONE NUMBER:%s\n", d[i].num);
            }
            else
            {
                goto start;
            }

            fflush(stdin);
            printf("\nENTER EMPLOYEE SALARY:");
            scanf("%d", &d[i].salary);
            fprintf(f2, "EMPLOYEE SALARY:%d\n", d[i].salary);

            fclose(f2);
        }
    }
    
}
void laer()
{
  FILE *f3;
  
}
