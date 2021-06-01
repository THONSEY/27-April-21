#include <stdio.h>
int main()
{
    int i = 'A', j, rows, number = 65;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            printf(" %c", number);
            number++;
        }
        printf("\n");
    }
}
