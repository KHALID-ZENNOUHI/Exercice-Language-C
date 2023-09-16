#include <stdio.h>
#include <stdlib.h>
int main(){
    int t, h, m, s, r;
    printf("donnez moi le temps en second : ");
    scanf("%d", &t);
    h = t / 3600;
    r = t % 3600;
    m = r / 60;
    s = r % 60;
    printf("%d heurs %d minute %d seconde", h, m, s);
    return 0;
}