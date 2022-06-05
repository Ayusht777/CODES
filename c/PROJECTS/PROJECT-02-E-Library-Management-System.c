// E-Library-Management-System
/*
    Add book information.
    Display book information.
    To list all books of a given author.
    To list the count of books in the library.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct lib
{
    char book_name[100];
    char author_name[100];
    int num_pages;
    float price;
};
int main()
{
    struct lib l[50];
    // max 50 books

    int select = 0;
    int x = 0;
    int t_book = 0;
    float tp = 0;
    while (select != 6)
    {
        printf("\n");
        for (int i = 0; i < 120; i++)
        {
            printf("-");
        }
        printf("\n                                               E-Library-Management-System\n");
        for (int i = 0; i < 120; i++)
        {
            printf("-");
        }
        printf("\n1.Add book information");
        printf("\n2.Display book information");
        printf("\n3.To list all books of a given author");
        printf("\n4.To list the count of books in the library");
        printf("\n5.The Total Price Of All Books");
        printf("\n6.EXIT");
        fflush(stdin);
        printf("\nSELECT THE OPTION:");
        scanf("%d", &select);
        switch (select)
        {
        case 1:
        {
            system("cls");
            for (int i = 0; i < 120; i++)
            {
                printf("-");
            }
            printf("\n1.Add book information\n");
            for (int i = 0; i < 120; i++)
            {
                printf("-");
            }
            fflush(stdin);
            printf("\nENTER BOOK NAME:");
            fgets(l[x].book_name, sizeof(l[x].book_name), stdin);
            printf("\nENTER AUTHOR NAME:");
            fgets(l[x].author_name, sizeof(l[x].author_name), stdin);
            fflush(stdin);
            printf("\nENTER NUMBER OF PAGES:");
            scanf("%d", &l[x].num_pages);
            fflush(stdin);
            printf("\nENTER PRICE OF BOOK:");
            scanf("%f", &l[x].price);
            tp = tp + l[x].price;
            t_book++;
            x++;
            break;
        }
        case 2:
        { // the info you add for the books
            system("cls");
            for (int i = 0; i < 120; i++)
            {
                printf("-");
            }
            printf("\n2.Display book information\n");
            for (int i = 0; i < 120; i++)
            {
                printf("-");
            }
            for (int j = 0; j < t_book; j++)
            {
                printf("\nTHE BOOK NAME:%s", l[j].book_name);
                printf("\nTHE BOOK AUTHOR NAME:%s", l[j].author_name);
                printf("\nTHE NUMBER OF PAGES:%d", l[j].num_pages);
                printf("\nTHE PRICE OF BOOK:%.2f", l[j].price);
            }
            break;
        }
        case 3:
        {
            system("cls");
            fflush(stdin);
            for (int i = 0; i < 120; i++)
            {
                printf("-");
            }
            printf("\n3.List all books of given author\n");
            for (int i = 0; i < 120; i++)
            {
                printf("-");
            }
            char auth[100];

            printf("\nENTER AUTHOR NAME:");
            fgets(auth, sizeof(auth), stdin);
            for (int j = 0; j < t_book; j++)
            {
                if (strcmpi(l[j].author_name, auth) == 0)
                {
                    printf("\n%d.%s", j + 1, l[j].book_name);
                }
            }
            break;
        }
        case 4:
        {
            system("cls");
            for (int i = 0; i < 120; i++)
            {
                printf("-");
            }
            printf("\n4.List the count of books in the library\n");
            for (int i = 0; i < 120; i++)
            {
                printf("-");
            }
            printf("\nTHE TOTAL BOOKS IN LIBARY : %d", t_book);
            break;
        }
        case 5:
        {
            system("cls");
            for (int i = 0; i < 120; i++)
            {
                printf("-");
            }
            printf("\n5.The Total Price Of All Books\n");
            for (int i = 0; i < 120; i++)
            {
                printf("-");
            }
            printf("\nTOTAL PRICE: %.2f", tp);
            break;
        }
        case 6:
        {
            exit(0);
        }
        default:
        {
            printf("\nWORNG OPTION");
        }
        }
    }
}