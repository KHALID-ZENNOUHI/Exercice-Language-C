#include <stdio.h>
int main(){
    int n, i, j;
    for ( i = 1; i <= 10; i++)
    {
        for ( j = 1; j <= 10; j++)
        {
            printf("\n %d * %d = %d", i, j, i*j);
        }
        printf("\n");
        
    }
    return 0;
}