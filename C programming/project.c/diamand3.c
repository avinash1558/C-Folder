#include <stdio.h>
int main()
{
    int c, k, n, s = 1;
    scanf("%d", &n);
    s = n - 1;
    for (k = 1; k <= n; k++)
    {
        for (c = 1; c <= s; c++){
            printf(" ");
            }
            s--;
        
        for (c = 1; c <= 2 * k - 1; c++)
        
            printf("%d",k);
        
            printf("\n");
    }
    s = 1;
    for (k = 1; k <= n-1; k++)
    {
        for (c = 1; c <= s; c++)
        
            printf(" ");
        
        s++;
        for (c = 1; c <= 2 * (n - k) - 1; c++)
        
            printf("%d",n-k);
    
            printf("\n");
        
    }
    return 0;
}