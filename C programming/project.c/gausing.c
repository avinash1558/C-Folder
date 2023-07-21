#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, g, ng = 1;
    srand(time(0));
    n = rand() % 10 + 1;

    do
    {
        printf("Enter Gause number : ");
        scanf("%d", &g);
        printf("\n");
        if (g < n)
        {
            printf("Enter Heigher number please : ");
            printf("\n");
        }
        else if (g > n)
        {
            printf("Enter Lower number please : ");
            printf("\n");
        }
        else
        {
            printf("You attempt is : %d", ng);
        }
        ng++;
    } while (n != g);

    return 0;
}