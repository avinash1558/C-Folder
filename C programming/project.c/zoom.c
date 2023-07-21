#include <stdio.h>
#include<windows.h>

int main()
{
    int c, k, n, s = 1,i=0,b;
    int d=2000;
    scanf("%d", &n);
    b=n;
    while( i <b+5)
    {
    s = n - 1;
    for (k = 1; k <= n; k++)
    {
        for (c = 1; c <= s; c++){
            printf(" ");
            }
            s--;
        
        for (c = 1; c <= 2 * k - 1; c++){
            printf("*");
            Sleep(250);
        }
            printf("\n");
            Sleep(250);
    }
    s = 1;
    for (k = 1; k <= n-1; k++)
    {
        for (c = 1; c <= s; c++)
        
            printf(" ");
        
        s++;
        for (c = 1; c <= 2 * (n - k) - 1; c++)
        
            printf("*");
    
            printf("\n");

    }
    n++;
    i++;
    Sleep(d);
    system("cls");
    }
    printf("-------------------------------------");
    

    return 0;
}