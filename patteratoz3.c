#include <stdio.h>
int main()
{
    int i, j, space;

    for (i = 0; i < 26; i++)
    {
        for (space = 0; space < 26 - i; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" %c", 64 + i);
        }
        printf("\n");
    }
    return 0;
}
