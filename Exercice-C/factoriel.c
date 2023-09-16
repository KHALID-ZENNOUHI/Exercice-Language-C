#include <stdio.h>
int main(){
    int n, i, fac;
    printf("entrez le nombre qui tu veux son factoriel : ");
    scanf("%d", &n);
    if (n > 0)
    {
        fac = 1;
        for ( i = 2; i <= n; i++)
        {
            fac = fac * i;
        }
        printf("le factorielle de %d! est : %d", n, fac);
    }else
        printf("le nombre que vous avez entrez est null ou inferieure a 0");
    return 0;
}