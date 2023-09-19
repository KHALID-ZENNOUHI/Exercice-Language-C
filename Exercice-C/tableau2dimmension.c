#include <stdio.h>
#include <stdlib.h>
/*Ecrire un programme qui lit les dimensions L et C d'un tableau T à deux dimensions 
du type int (dimensions maximales: 50 lignes et 50 colonnes).
 Remplir le tableau par des valeurs entrées au clavier 
 et afficher le tableau ainsi que la somme de tous ses éléments.*/
 int main(){
    int L, C;
    printf("entrez le nombre de ligne du tableau : ");
    scanf("%d", &L);
    printf("entrez le nombre de colone du tableau : ");
    scanf("%d", &C);
    int T[L][L];
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < L; j++)
        {
            printf("entrez la note -> Note[%d][%d] : ", i+1, j+1);
            scanf("%d", &T[i][j]);
        }
        
    }
    int somme = 0;
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < L; j++)
        {
            somme = somme + T[i][j];
        }
        
    }
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < L; j++)
        {
            printf("\nNote [%d][%d] = %d", i+1, j+1, T[i][j]);
        }
        
    }
    printf("\n\nla somme des elements du tableau est : %d", somme);
    return 0;
 }