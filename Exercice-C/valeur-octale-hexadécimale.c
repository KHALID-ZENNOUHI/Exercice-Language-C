#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("entrez un nombre : ");
    scanf("%d", &n);
    printf("La représentation octale de %d est : %o\n", n, n);
    printf("La représentation hexadécimale de %d est : %x\n", n, n);
    return 0;
}