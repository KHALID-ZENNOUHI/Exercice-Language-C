#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n, i, j, k;
    printf("enter how raw you want :");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n-i ; j++)
        {
            printf("  ");
        }
        for ( k = 1; k <= 2*i-1; k++)
        {
            printf("* ");
        } 
        printf("\n");
        
    }
    // for ( i = 0; i < n; i++)
    // {
    //     for ( j = n; j > -n+1; j--)
    //     {
    //         if (i > abs(j) )
    //         {
    //             printf("* ");
    //         }else
    //             printf("  ");
                
            
            
    //     }
    //     printf("\n");
    // }
    
    return 0;
}