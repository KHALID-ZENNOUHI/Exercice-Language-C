#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, inverse;
    printf("entrez un nombre de trois chifres : ");
    scanf("%d", &n);
    inverse = ((n % 10) * 100) + (((n / 10) % 10) * 10) + ((n / 10) / 10);
    printf("%d", inverse);
    return 0;
}