#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b, c;
    printf("entrez la valeure du premier nombre a : \n");
    scanf("%d", &a);
    printf("entrez la valeure du deusième nombre b: \n");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("la valeure du premier est : %d\nla valeure du deusieme est : %d", a,  b);
    return 0;
}