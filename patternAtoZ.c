#include <stdio.h>
int min()
{
    int i, j, rows, number = 26;
    for (i = 26; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", number);
            number--;
        }
        printf("\n");
    }
    return 0;
}
