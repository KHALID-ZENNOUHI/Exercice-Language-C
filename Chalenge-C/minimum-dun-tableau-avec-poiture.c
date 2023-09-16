#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[20], i, min;
    int *P;
    P = T;
    printf("entrez les elements du tableaux : \n");
    for (i = 0; i < 10; i++)
    {
        printf("T[%d] = ", i + 1);
        scanf("%d", (P + i));
    }
    min = *T;
    for (P = T+1; P < T + 10; P++)
    {
        if (min > *P )
        {
            min = *P;
        }
    }
    printf("le minimume est : %d", min);
    return 0;
}