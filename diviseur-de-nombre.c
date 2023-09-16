#include <stdio.h>
int main(){
    int n, i;
    printf("entrez un nombre n : ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("\nle nombre %d est un diviseur de %d", i, n);
        }
        
    }
    return 0;
}
