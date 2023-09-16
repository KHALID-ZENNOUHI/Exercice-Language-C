#include <stdio.h>
#include <math.h>
int main(){
    float N;
    printf("entrez votre note : ");
    scanf("%f", &N);
    if (N < 10)
    {
        printf("votre note est insufisante.");
    }else if (N >= 10 && N < 12)
    {
        printf("votre mention est : Passable.");
    }else if (N >= 12 && N < 14)
    {
        printf("votre mention est : assez bien.");
    }else if (N >= 14 && N < 16)
    {
        printf("votre mention est : bien");
    }else
        printf("votre mention est : tres bien.");
    return 0;
}