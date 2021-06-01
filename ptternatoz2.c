#include <stdio.h>
int main()
{
    int i, j, number = 64;
    for (i = 26; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %c", number + i);
        }

        printf("\n");
    }
    return 0;
}
