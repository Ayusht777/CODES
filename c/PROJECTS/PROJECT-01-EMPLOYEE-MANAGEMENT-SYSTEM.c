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
    char eid[10];
    char num[11];
    char add[150];
    int age;
    float salary;
};

void cndb();
void adr();
void laer();
void ed();
void dd();
int main()
{
    int option = 0;
    while (option != 6)
    {
        printf("\n");
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
        printf("\n                                       4.ENCRYPTED DATA");
        printf("\n                                       5.DECRYPTED DATA");
        printf("\n                                       6.EXIT\n");
        for (int i = 0; i < 101; i++)
        {
            printf("-");
        }

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
        case 4:
        {
            ed();
            break;
        }
        case 5:
        {
            dd();
            break;
        }
        case 6:
        {
            exit(1);
            break;
        }
        default:
        {
            printf("\nWRONG OPTION");
            break;
        }
        }
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
            fprintf(f2, "EMPLOYEE ID:%s", d[i].eid);
            fflush(stdin);
            printf("\nENTER EMPLOYEE NAME:");
            fgets(d[i].name, sizeof(d[i].name), stdin);
            fprintf(f2, "EMPLOYEE NAME:%s", d[i].name);
            fflush(stdin);
            printf("\nENTER EMPLOYEE AGE:");
            scanf("%d", &d[i].age);
            fprintf(f2, "EMPLOYEE AGE:%d", d[i].age);
            fflush(stdin);
            printf("\nENTER EMPLOYEE ADDRESS:");
            fgets(d[i].add, sizeof(d[i].add), stdin);
            fprintf(f2, "\nEMPLOYEE ADDRESS:%s", d[i].add);
            fflush(stdin);
        start:
            printf("\nENTER EMPLOYEE PHONE NUMBER:");
            scanf("%s", &d[i].num);
            if (strlen(d[i].num) == 10)
            {
                fprintf(f2, "EMPLOYEE PHONE NUMBER:%s", d[i].num);
            }
            else
            {
                goto start;
            }

            fflush(stdin);
            printf("\nENTER EMPLOYEE SALARY:");
            scanf("%f", &d[i].salary);
            fprintf(f2, "\nEMPLOYEE SALARY:%.2f", d[i].salary);
            fputc('\n', f2);

            fclose(f2);
        }
    }
}
void laer()
{
    system("cls");

    for (int i = 0; i < 101; i++)
    {
        printf("-");
    }
    printf("\nLIST OF ALL EMPLOYEE RECORD");
    printf("\n");

    for (int i = 0; i < 101; i++)
    {

        printf("-");
    }
    char file3[100];
    FILE *f3;
    printf("\nENTER DATA BASE FILE NAME:");
    scanf("%s", file3);
    if (f3 == NULL)
    {
        printf("\nFILE DOESNOT EXIST");
        exit(1);
    }
    else
    {

        f3 = fopen(file3, "r");
        char r[100];
        while (fgets(r, sizeof(r), f3) != NULL)
        {
            printf("%s", r);
        }
        fclose(f3);
    }
}
void ed()
{
    system("cls");
    for (int i = 0; i < 101; i++)
    {
        printf("-");
    }
    printf("\nENCRYPTED DATA");
    printf("\n");

    for (int i = 0; i < 101; i++)
    {

        printf("-");
    }
    FILE *f4, *f5;
    char file4[100];
    printf("\nENETR FILE NAME:");
    scanf("%s", file4);
    if (f4 == NULL)
    {
        printf("\nFILE DOESNOT EXITS");
        exit(1);
    }
    else
    {
        f4 = fopen(file4, "r");
        f5 = fopen("ENCRYPTED.txt", "w");
        char s;
        while ((s = fgetc(f4)) != EOF)
        {
            s = s + 40;
            fputc(s, f5);
        }
        fclose(f4);
        fclose(f5);
        printf("\nFILE IS SUCCESFULLY CREATED");

        f4 = fopen(file4, "w");
        f5 = fopen("ENCRYPTED.txt", "r");
        char a1;
        while ((a1 = fgetc(f5)) != EOF)
        {
            putc(a1, f4);
        }
        fclose(f4);
        fclose(f5);
        remove("ENCRYPTED.txt");
    }
}
void dd()
{
    system("cls");
    for (int i = 0; i < 101; i++)
    {
        printf("-");
    }
    printf("\nENCRYPTED DATA");
    printf("\n");

    for (int i = 0; i < 101; i++)
    {

        printf("-");
    }
    FILE *f6, *f7;
    char file5[100];
    printf("\nENETR FILE NAME:");
    scanf("%s", file5);
    if (f6 == NULL)
    {
        printf("\nFILE DOESNOT EXITS");
        exit(1);
    }
    else
    {
        f6 = fopen(file5, "r");
        f7 = fopen("DECRYPTED.txt", "w");
        char s;
        while ((s = fgetc(f6)) != EOF)
        {
            s = s - 40;
            fputc(s, f7);
        }
        fclose(f6);
        fclose(f7);
        printf("\nFILE IS SUCCESFULLY CREATED");

        f6 = fopen(file5, "w");
        f7 = fopen("DECRYPTED.txt", "r");
        char a2;
        while ((a2 = fgetc(f7)) != EOF)
        {
            putc(a2, f6);
        }
        fclose(f6);
        fclose(f7);
        remove("DECRYPTED.txt");
    }
}
