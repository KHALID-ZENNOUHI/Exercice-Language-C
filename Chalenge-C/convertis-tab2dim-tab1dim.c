#include <stdio.h>
#include <stdlib.h>
/*Ecrire un programme qui transfère un tableau M à deux dimensions L et C 
(dimensions maximales: 10 lignes et 10 colonnes) dans un tableau V à une dimension L*C..
   /         \
   | a b c d |        /                         \
   | e f g h |  ==>   | a b c d e f g h i j k l |
   | i j k l |        \                         /
   \         /
*/
int main(){
    int L, C;
    printf("entrez le nombre de ligne du tableau : ");
    scanf("%d", &L);
    printf("entrez le nombre de colone du tableau : ");
    scanf("%d", &C);
    int T[L][C];
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("entrez la note -> Note[%d][%d] : ", i+1, j+1);
            scanf("%d", &T[i][j]);
        }
        
    }
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (j == C-1)
            {
                printf("\n");
            }
            
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
    int tab[L*C];
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            for (int k = 0; k < L*C; k++)
            {
                tab[k] = T[i][j];
                printf("%d ", tab[k]);
            }
            
        }
        
    }
    // for (int i = 0; i < L*C; i++)
    // {
    //     printf("%d ", tab[i]);
    // }
    return 0;
}