﻿#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter number of the rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for (i = rows - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
