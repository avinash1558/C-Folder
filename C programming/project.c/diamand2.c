#include <stdio.h>
int main()
{
    int c, k, n, s = 1;
    scanf("%d", &n);
    s = n - 1;
    for (k = 1; k <= n; k++)
    {
        for (c = 1; c <= s; c++)
        {
            printf(" ");
        }
        s--;
        printf("a");
        for (c = 1; c <= 2 * (k - 1); c++)
        {
            printf(" ");
        }
        if (k == 1)
        {
            printf("\n");
        }
        else
        {
            printf("a\n");
        }
    }
    s = 1;
    for (k = 1; k <= n - 1; k++)
    {
        for (c = 1; c <= s; c++)
        {
            printf(" ");
        }
        s++;
        printf("*");
        for (c = 1; c <= 2 * (n-k - 1); c++)//1-4-1
        {
            printf(" ");
        }
        if (k == n - 1)
        {
            printf("\n");
        }
        else
        {
            printf("*\n");
        }
    }
    return 0;
}