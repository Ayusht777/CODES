// Q1-program-to-read-name-and-marks-of-n-number-of-students-and-store-them-in-a-file.c
#include <stdio.h>
struct data
{
    int marks;
    char name[100];
};
int main()
{
    FILE *f;
    f = fopen("E:\\PROGAMMING\\GITHUB\\c\\FILE HANDLING\\STUDENT_DATA_BASE.txt", "w");

    int n;
    printf("\nENTER A TOTAL NUMBER OF STUDENT:");
    scanf("%d", &n);
    struct data d[n];

    printf("\nENTER THE INFO");
    for (int i = 0; i < n; i++)
    {
        printf("\nENTER NAME %d:", i + 1);
        scanf(" %99[^\n]", d[i].name);
        printf("\nTHE MARKS %d:", i + 1);
        scanf("%d", &d[i].marks);
        fprintf(f, "%d NAME : %s,MARKS :%d\n", i + 1, d[i].name, d[i].marks);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nENTER NAME %d:%s", i + 1, d[i].name);

        printf("\nTHE MARKS %d:%d", i + 1, d[i].marks);
    }
    fclose(f);
}
