//Q20.Write a program in C to find sum of rows an columns of a Matrix
#include<stdio.h>

void main() {
        int r, c;
        printf("\nPROGRAM TO FIND THE SUM OF ROW AND COLUMNS");
        printf("\n-------------------------------------------");
        printf("\nENTER SIZE OF ROW:");
        scanf("%d", & r);
        printf("\nENTER SIZE OF COLUMNS:");
        scanf("%d", & c);
        int x[r][c];
        printf("\n-------------------------------------------");
        printf("\nENTER THE ELEMENT IN MATRIX");
        int i, j;
        for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                        printf("\nA[%d][%d]:", i, j);
                        scanf("%d", & x[i][j]);
                }
        }
        printf("\n-------------------------------------------");
        printf("\nTHE MATRIX\n");
        for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                        printf("\t%d", x[i][j]);
                }
                printf("\n");
        }

        int sum = 0;
        int k;
        printf("\n-------------------------------------------");
        for (k = 0; k < r; k++) {
                sum = 0;
                for (i = k; i < r; i++) {
                        for (j = 0; j < c; j++) {
                                sum = sum + x[i][j];
                        }
                        break;
                }
                printf("\nTHE SUM OF ROW %d = %d", k + 1, sum);
        }
        printf("\n-------------------------------------------");
        for (k = 0; k < c; k++) {

                sum = 0;
                for (i = k; i < c; i++) {
                        for (j = 0; j < r; j++) {
                                sum = sum + x[j][i];
                        }
                        break;

                }
                printf("\nTHE SUM OF COLUMNS %d = %d", k + 1, sum);
        }
}
